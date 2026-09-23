__attribute__((naked)) void fun_0802f850()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r4,#0x0\n\
     ldr        r7,DAT_0802f954\n\
     mov        r8,r7\n\
     ldr        r0,DAT_0802f958\n\
     add        r6,r0,#0x0\n\
     mov        r5,#0x0\n\
LAB_0802f866:\n\
     lsl        r2,r4,#0x4\n\
     add        r1,r4,#0x1\n\
     add        r2,r8\n\
     mov        r3,#0x3\n\
LAB_0802f86e:\n\
     ldrh       r0,[r2,#0x0]\n\
     orr        r0,r6\n\
     strh       r0,[r2,#0x0]\n\
     strh       r5,[r2,#0x2]\n\
     add        r2,#0x4\n\
     sub        r3,#0x1\n\
     cmp        r3,#0x0\n\
     bge        LAB_0802f86e\n\
     mov        r3,#0x4\n\
     add        r4,r1,#0x0\n\
     cmp        r4,#0x4\n\
     ble        LAB_0802f866\n\
     mov        r1,#0x0\n\
     mov        r8,r1\n\
     mov        r0,#0x10\n\
     lsl        r2,r4,#0x4\n\
     ldr        r5,DAT_0802f954\n\
     mov        r10,r5\n\
LAB_0802f892:\n\
     add        r0,r0,r2\n\
     add        r0,r0,r7\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     mov        r5,r8\n\
     lsl        r6,r5,#0x10\n\
     mov        r1,#0x1\n\
     add        r1,r8\n\
     mov        r9,r1\n\
     mov        r5,#0x1\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     cmp        r0,r5\n\
     beq        LAB_0802f8ce\n\
     ldr        r7,DAT_0802f954\n\
LAB_0802f8ae:\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     add        r3,r0,#0x0\n\
     lsl        r0,r3,#0x2\n\
     lsl        r1,r4,#0x4\n\
     add        r0,r0,r1\n\
     add        r0,r0,r7\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,r5\n\
     bne        LAB_0802f8ae\n\
LAB_0802f8ce:\n\
     lsl        r0,r3,#0x2\n\
     lsl        r1,r4,#0x4\n\
     add        r0,r0,r1\n\
     add        r0,r10\n\
     mov        r5,r8\n\
     strh       r5,[r0,#0x0]\n\
     asr        r0,r6,#0x10\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     cmp        r0,r1\n\
     beq        LAB_0802f908\n\
     ldr        r6,DAT_0802f954\n\
     add        r5,r1,#0x0\n\
LAB_0802f8e8:\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     add        r4,r0,#0x0\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     add        r3,r0,#0x0\n\
     lsl        r0,r3,#0x2\n\
     lsl        r1,r4,#0x4\n\
     add        r0,r0,r1\n\
     add        r0,r0,r6\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,r5\n\
     bne        LAB_0802f8e8\n\
LAB_0802f908:\n\
     lsl        r0,r3,#0x2\n\
     lsl        r2,r4,#0x4\n\
     add        r1,r0,r2\n\
     add        r1,r10\n\
     mov        r5,r8\n\
     strh       r5,[r1,#0x0]\n\
     mov        r8,r9\n\
     ldr        r7,DAT_0802f954\n\
     mov        r1,r8\n\
     cmp        r1,#0x9\n\
     ble        LAB_0802f892\n\
     mov        r4,#0x0\n\
     mov        r6,#0x1\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     mov        r5,#0x0\n\
LAB_0802f926:\n\
     lsl        r2,r4,#0x4\n\
     add        r1,r4,#0x1\n\
     add        r2,r2,r7\n\
     mov        r3,#0x3\n\
LAB_0802f92e:\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r2,r4]\n\
     cmp        r0,r6\n\
     bne        LAB_0802f938\n\
     strh       r5,[r2,#0x0]\n\
LAB_0802f938:\n\
     add        r2,#0x4\n\
     sub        r3,#0x1\n\
     cmp        r3,#0x0\n\
     bge        LAB_0802f92e\n\
     add        r4,r1,#0x0\n\
     cmp        r4,#0x4\n\
     ble        LAB_0802f926\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802f954:\n\
     .word 0x020105F0\n\
DAT_0802f958:\n\
     .word 0x0000FFFF\n\
    ");
}
__attribute__((naked)) void fun_0802f95c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r1,DAT_0802f97c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0802f980\n\
     mov        r3,#0x0\n\
     ldrsh      r2,[r0,r3]\n\
     ldr        r0,DAT_0802f984\n\
     add        r3,r1,#0x0\n\
     cmp        r2,r0\n\
     bgt        LAB_0802f988\n\
     mov        r1,#0x96\n\
     lsl        r1,r1,#0x1\n\
     add        r0,r1,#0x0\n\
     b          LAB_0802f9a0\n\
.space 1\n\
.space 1\n\
DAT_0802f97c:\n\
     .word 0x0200EE04\n\
DAT_0802f980:\n\
     .word 0x02010208\n\
DAT_0802f984:\n\
     .word 0x00000A8B\n\
LAB_0802f988:\n\
     ldr        r0,DAT_0802f994\n\
     cmp        r2,r0\n\
     bgt        LAB_0802f998\n\
     mov        r0,#0xc8\n\
     b          LAB_0802f9a0\n\
.space 1\n\
.space 1\n\
DAT_0802f994:\n\
     .word 0x00002327\n\
LAB_0802f998:\n\
     ldr        r0,DAT_0802f9c8\n\
     cmp        r2,r0\n\
     bgt        LAB_0802f9a2\n\
     mov        r0,#0x64\n\
LAB_0802f9a0:\n\
     strh       r0,[r3,#0x0]\n\
LAB_0802f9a2:\n\
     ldr        r1,DAT_0802f9cc\n\
     ldr        r0,DAT_0802f9d0\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r3,[r3,#0x0]\n\
     add        r0,r0,r3\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_0802f9d4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_08002bcc\n\
     mov        r0,#0x96\n\
     mov        r1,#0x0\n\
     bl         fun_08002e8c\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802f9c8:\n\
     .word 0x0000464F\n\
DAT_0802f9cc:\n\
     .word 0x02010640\n\
DAT_0802f9d0:\n\
     .word 0x0201027C\n\
DAT_0802f9d4:\n\
     .word 0x0201064C\n\
    ");
}
__attribute__((naked)) void fun_0802f9d8()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0xc\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_0802fa08\n\
     ldr        r2,DAT_0802fa0c\n\
     add        r0,r1,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r1,DAT_0802fa10\n\
     ldr        r0,DAT_0802fa14\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r3,DAT_0802fa18\n\
     mov        r0,sp\n\
     mov        r1,#0x0\n\
     mov        r2,#0x3\n\
     bl         fun_0803c138\n\
     add        sp,#0xc\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0802fa08:\n\
     .word 0x000007FF\n\
DAT_0802fa0c:\n\
     .word 0x00007FFF\n\
DAT_0802fa10:\n\
     .word 0x085EA8DC\n\
DAT_0802fa14:\n\
     .word 0x0201027C\n\
DAT_0802fa18:\n\
     .word 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_0802fa1c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0802fa28()
{
    asm("\n\
     ldr        r2,DAT_0802fa40\n\
     ldr        r0,DAT_0802fa44\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_0802fa48\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0802fa4c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_0802fa40:\n\
     .word 0x020106F0\n\
DAT_0802fa44:\n\
     .word 0x085EA944\n\
DAT_0802fa48:\n\
     .word 0x02010700\n\
DAT_0802fa4c:\n\
     .word 0x085EA8E0\n\
    ");
}
__attribute__((naked)) void fun_0802fa50()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     sub        sp,#0x4\n\
     ldr        r1,PTR_DAT_0802fb88\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802fb8c\n\
     mov        r4,#0x1\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802fb90\n\
     ldr        r0,PTR_DAT_0802fb94\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802fb98\n\
     mov        r0,#0xc\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r3,PTR_DAT_0802fb9c\n\
     ldr        r2,PTR_DAT_0802fba0\n\
     ldr        r0,PTR_DAT_0802fba4\n\
     mov        r1,#0x0\n\
     strh       r1,[r0,#0x0]\n\
     strh       r1,[r2,#0x0]\n\
     strh       r1,[r3,#0x0]\n\
     ldr        r2,PTR_DAT_0802fba8\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbac\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbb0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbb4\n\
     mov        r6,#0x3c\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbb8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbbc\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbc0\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802fbc4\n\
     ldr        r0,PTR_DAT_0802fbc8\n\
     mov        r5,#0x0\n\
     str        r5,[r0,#0x0]\n\
     str        r5,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbcc\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbd0\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r4,PTR_DAT_0802fbd4\n\
     ldr        r3,PTR_DAT_0802fbd8\n\
     ldr        r2,PTR_DAT_0802fbdc\n\
     ldr        r1,PTR_DAT_0802fbe0\n\
     ldr        r0,PTR_DAT_0802fbe4\n\
     strh       r5,[r0,#0x0]\n\
     strh       r5,[r1,#0x0]\n\
     strh       r5,[r2,#0x0]\n\
     strh       r5,[r3,#0x0]\n\
     strh       r5,[r4,#0x0]\n\
     ldr        r2,PTR_DAT_0802fbe8\n\
     ldr        r1,PTR_DAT_0802fbec\n\
     ldr        r0,PTR_DAT_0802fbf0\n\
     strh       r5,[r0,#0x0]\n\
     strh       r5,[r1,#0x0]\n\
     strh       r5,[r2,#0x0]\n\
     ldr        r0,PTR_DAT_0802fbf4\n\
     strh       r6,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802fbf8\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802fbfc\n\
     mov        r0,#0x1e\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802fc00\n\
     mov        r2,#0x5\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0802fc04\n\
     mov        r3,#0x2\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0802fc08\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     mov        r1,#0xff\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r4,DAT_0802fc0c\n\
     str        r0,[r4,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r4,#0x4]\n\
     ldr        r0,DAT_0802fc10\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     mov        r6,#0xa0\n\
     lsl        r6,r6,#0x13\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_0802fc14\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x13\n\
     mov        r8,r0\n\
     ldr        r1,DAT_0802fc18\n\
     add        r0,r1,#0x0\n\
     mov        r3,r8\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r1,DAT_0802fc1c\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0802fc40\n\
     mov        r0,sp\n\
     strh       r5,[r0,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_0802fc20\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r0,DAT_0802fc24\n\
     ldr        r1,DAT_0802fc28\n\
     bl         fun_0803d070\n\
     bl         fun_08002bcc\n\
     ldr        r0,DAT_0802fc2c\n\
     str        r0,[r4,#0x0]\n\
     str        r6,[r4,#0x4]\n\
     ldr        r0,DAT_0802fc30\n\
     str        r0,[r4,#0x8]\n\
     ldr        r0,[r4,#0x8]\n\
     ldr        r1,DAT_0802fc34\n\
     add        r0,r1,#0x0\n\
     mov        r3,r8\n\
     strh       r0,[r3,#0x0]\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_0802fc38\n\
     ldr        r2,DAT_0802fc3c\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     bl         fun_080316d4\n\
     mov        r0,#0x0\n\
     add        sp,#0x4\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r1}\n\
     bx         r1\n\
PTR_DAT_0802fb88:\n\
     .word       DAT_02010710\n\
PTR_DAT_0802fb8c:\n\
     .word       DAT_0200ecc0\n\
PTR_DAT_0802fb90:\n\
     .word       DAT_0200ece0\n\
PTR_DAT_0802fb94:\n\
     .word       DAT_02005830\n\
PTR_DAT_0802fb98:\n\
     .word       DAT_020107d4\n\
PTR_DAT_0802fb9c:\n\
     .word       DAT_0201078c\n\
PTR_DAT_0802fba0:\n\
     .word       DAT_0201074c\n\
PTR_DAT_0802fba4:\n\
     .word       DAT_02010780\n\
PTR_DAT_0802fba8:\n\
     .word       DAT_02010830\n\
PTR_DAT_0802fbac:\n\
     .word       DAT_02010440\n\
PTR_DAT_0802fbb0:\n\
     .word       DAT_02010774\n\
PTR_DAT_0802fbb4:\n\
     .word       DAT_0200ed40\n\
PTR_DAT_0802fbb8:\n\
     .word       DAT_02010794\n\
PTR_DAT_0802fbbc:\n\
     .word       DAT_020107ac\n\
PTR_DAT_0802fbc0:\n\
     .word       DAT_02010778\n\
PTR_DAT_0802fbc4:\n\
     .word       DAT_02010790\n\
PTR_DAT_0802fbc8:\n\
     .word       DAT_020107a8\n\
PTR_DAT_0802fbcc:\n\
     .word       DAT_02010754\n\
PTR_DAT_0802fbd0:\n\
     .word       DAT_020107d8\n\
PTR_DAT_0802fbd4:\n\
     .word       DAT_020107e4\n\
PTR_DAT_0802fbd8:\n\
     .word       DAT_020107a4\n\
PTR_DAT_0802fbdc:\n\
     .word       DAT_02010838\n\
PTR_DAT_0802fbe0:\n\
     .word       DAT_02010750\n\
PTR_DAT_0802fbe4:\n\
     .word       DAT_020107cc\n\
PTR_DAT_0802fbe8:\n\
     .word       DAT_02010748\n\
PTR_DAT_0802fbec:\n\
     .word       DAT_020107a0\n\
PTR_DAT_0802fbf0:\n\
     .word       DAT_02010714\n\
PTR_DAT_0802fbf4:\n\
     .word       DAT_0200edd8\n\
PTR_DAT_0802fbf8:\n\
     .word       DAT_02010744\n\
PTR_DAT_0802fbfc:\n\
     .word       DAT_020107c4\n\
PTR_DAT_0802fc00:\n\
     .word       DAT_02010740\n\
PTR_DAT_0802fc04:\n\
     .word       DAT_020107c8\n\
PTR_DAT_0802fc08:\n\
     .word       DAT_02010784\n\
DAT_0802fc0c:\n\
     .word 0x040000D4\n\
DAT_0802fc10:\n\
     .word 0x8100C000\n\
DAT_0802fc14:\n\
     .word 0x81000200\n\
DAT_0802fc18:\n\
     .word 0x00001F44\n\
DAT_0802fc1c:\n\
     .word 0x0400000C\n\
DAT_0802fc20:\n\
     .word 0x81000100\n\
DAT_0802fc24:\n\
     .word 0x085EE658\n\
DAT_0802fc28:\n\
     .word 0x0600A000\n\
DAT_0802fc2c:\n\
     .word 0x085EE458\n\
DAT_0802fc30:\n\
     .word 0x80000100\n\
DAT_0802fc34:\n\
     .word 0x00001F54\n\
DAT_0802fc38:\n\
     .word 0x00006739\n\
DAT_0802fc3c:\n\
     .word 0x00007FFF\n\
    ");
}
__attribute__((naked)) void fun_0802fc40()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r0,#0x0\n\
     bl         fun_080036b0\n\
     mov        r0,#0x1\n\
     bl         fun_08004670\n\
     ldr        r0,DAT_0802fd28\n\
     bl         fun_080045f0\n\
     mov        r5,#0x0\n\
     mov        r4,#0x0\n\
LAB_0802fc5c:\n\
     ldr        r0,DAT_0802fd2c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802fd30\n\
     lsl        r2,r5,#0x2\n\
     add        r2,r2,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x10]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0xf0\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0xa0\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x4\n\
     bls        LAB_0802fc5c\n\
     mov        r6,#0x0\n\
     mov        r5,#0x0\n\
     mov        r8,r5\n\
     ldr        r4,DAT_0802fd34\n\
     ldr        r7,DAT_0802fd38\n\
LAB_0802fca4:\n\
     ldr        r0,DAT_0802fd3c\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802fd40\n\
     lsl        r2,r5,#0x2\n\
     add        r2,r2,r1\n\
     str        r0,[r2,#0x0]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r2,#0x0]\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r7,[r0,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x3\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     add        r0,r6,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x23\n\
     strb       r0,[r4,#0x0]\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x3\n\
     bls        LAB_0802fca4\n\
     mov        r5,#0x0\n\
     mov        r7,#0x0\n\
     mov        r6,#0x0\n\
LAB_0802fcea:\n\
     ldr        r0,DAT_0802fd44\n\
     bl         fun_08003998\n\
     ldr        r2,DAT_0802fd48\n\
     lsl        r1,r5,#0x2\n\
     add        r4,r1,r2\n\
     str        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x0]\n\
     sub        r0,r5,#0x5\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x2\n\
     bhi        LAB_0802fd50\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x80\n\
     bl         fun_080047d0\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x82\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x0]\n\
     ldr        r2,DAT_0802fd4c\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x10]\n\
     b          LAB_0802fd68\n\
DAT_0802fd28:\n\
     .word 0x085EE258\n\
DAT_0802fd2c:\n\
     .word 0x085EE228\n\
DAT_0802fd30:\n\
     .word 0x02010760\n\
DAT_0802fd34:\n\
     .word 0x02010710\n\
DAT_0802fd38:\n\
     .word 0x0000FFE0\n\
DAT_0802fd3c:\n\
     .word 0x085EE218\n\
DAT_0802fd40:\n\
     .word 0x02010840\n\
DAT_0802fd44:\n\
     .word 0x085EE238\n\
DAT_0802fd48:\n\
     .word 0x02010720\n\
DAT_0802fd4c:\n\
     .word 0x0000FDFF\n\
LAB_0802fd50:\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
LAB_0802fd68:\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x7\n\
     bls        LAB_0802fcea\n\
     ldr        r1,DAT_0802fdf0\n\
     ldr        r2,[r1,#0x14]\n\
     mov        r4,#0x0\n\
     ldr        r0,DAT_0802fdf4\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r1,#0x18]\n\
     mov        r0,#0xf\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r1,[r1,#0x1c]\n\
     mov        r0,#0x28\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_0802fdf8\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_0802fdfc\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x3\n\
     strh       r1,[r0,#0x6]\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x10]\n\
     ldr        r1,DAT_0802fe00\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,DAT_0802fe04\n\
     ldrh       r1,[r1,#0x6]\n\
     strh       r1,[r0,#0x4]\n\
     strh       r4,[r0,#0x0]\n\
     mov        r5,#0x0\n\
LAB_0802fdaa:\n\
     ldr        r0,DAT_0802fe08\n\
     bl         fun_08003998\n\
     ldr        r2,DAT_0802fe0c\n\
     lsl        r1,r5,#0x2\n\
     add        r1,r1,r2\n\
     str        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x6]\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x10]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x4]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     add        r0,r5,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r5,r0,#0x18\n\
     cmp        r5,#0x3\n\
     bls        LAB_0802fdaa\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0802fdf0:\n\
     .word 0x02010720\n\
DAT_0802fdf4:\n\
     .word 0x0000FFF6\n\
DAT_0802fdf8:\n\
     .word 0x084492B8\n\
DAT_0802fdfc:\n\
     .word 0x02010400\n\
DAT_0802fe00:\n\
     .word 0x087C732C\n\
DAT_0802fe04:\n\
     .word 0x087C732E\n\
DAT_0802fe08:\n\
     .word 0x085EE248\n\
DAT_0802fe0c:\n\
     .word 0x020107B0\n\
    ");
}
__attribute__((naked)) void fun_0802fe10()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     ldr        r0,DAT_0802fe98\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0802ff18\n\
     mov        r0,#0x0\n\
     mov        r12,r0\n\
     mov        r1,#0x0\n\
     str        r1,[sp,#0x0]\n\
LAB_0802fe2c:\n\
     ldr        r2,[sp,#0x0]\n\
     lsl        r0,r2,#0x4\n\
     ldr        r3,DAT_0802fe9c\n\
     add        r2,r0,r3\n\
     ldrb       r4,[r2,#0x4]\n\
     lsl        r0,r4,#0x1c\n\
     ldr        r5,[sp,#0x0]\n\
     add        r5,#0x1\n\
     mov        r10,r5\n\
     cmp        r0,#0x0\n\
     bge        LAB_0802fece\n\
     ldr        r4,DAT_0802fea0\n\
     ldr        r6,[sp,#0x0]\n\
     lsl        r0,r6,#0x2\n\
     add        r1,r0,r4\n\
     ldr        r3,[r1,#0x0]\n\
     mov        r5,#0x2\n\
     ldrsh      r0,[r3,r5]\n\
     sub        r0,#0x1\n\
     mov        r6,#0x22\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     cmp        r0,r6\n\
     blt        LAB_0802fece\n\
     ldrh       r0,[r3,#0x2]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x2]\n\
     mov        r0,#0x1\n\
     mov        r12,r0\n\
     mov        r7,#0x0\n\
     mov        r9,r4\n\
     add        r6,r1,#0x0\n\
     add        r5,r2,#0x0\n\
     ldr        r1,DAT_0802fea4\n\
     mov        r8,r1\n\
LAB_0802fe70:\n\
     ldr        r2,[r6,#0x0]\n\
     lsl        r1,r7,#0x2\n\
     mov        r3,r9\n\
     add        r0,r1,r3\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r4,#0x2\n\
     ldrsh      r2,[r2,r4]\n\
     mov        r4,#0x2\n\
     ldrsh      r0,[r3,r4]\n\
     add        r4,r1,#0x0\n\
     cmp        r2,r0\n\
     bge        LAB_0802fea8\n\
     mov        r1,#0x0\n\
     ldrsh      r0,[r5,r1]\n\
     cmp        r0,r8\n\
     bne        LAB_0802fea8\n\
     mov        r0,#0x2\n\
     strh       r0,[r3,#0x0]\n\
     b          LAB_0802fec4\n\
.space 1\n\
.space 1\n\
DAT_0802fe98:\n\
     .word 0x02010778\n\
DAT_0802fe9c:\n\
     .word 0x020107F0\n\
DAT_0802fea0:\n\
     .word 0x02010840\n\
DAT_0802fea4:\n\
     .word 0x000003E7\n\
LAB_0802fea8:\n\
     ldr        r1,[r6,#0x0]\n\
     mov        r2,r9\n\
     add        r0,r4,r2\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r1,[r1,#0x2]\n\
     ldrh       r3,[r2,#0x2]\n\
     cmp        r1,r3\n\
     bne        LAB_0802fec4\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r5,r4]\n\
     cmp        r0,r8\n\
     bne        LAB_0802fec4\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
LAB_0802fec4:\n\
     add        r0,r7,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r7,r0,#0x18\n\
     cmp        r7,#0x3\n\
     bls        LAB_0802fe70\n\
LAB_0802fece:\n\
     mov        r5,r10\n\
     lsl        r0,r5,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     cmp        r0,#0x3\n\
     bls        LAB_0802fe2c\n\
     ldr        r1,LAB_0802ff10\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r1,r6]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802feea\n\
     sub        r0,r2,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0802feea:\n\
     mov        r0,r12\n\
     cmp        r0,#0x0\n\
     beq        LAB_0802fef4\n\
     bl         fun_08030ba0\n\
LAB_0802fef4:\n\
     ldr        r1,LAB_0802ff10\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802ff02\n\
     bl         fun_08030ba0\n\
LAB_0802ff02:\n\
     mov        r4,r12\n\
     ldr        r3,LAB_0802ff14\n\
     strh       r4,[r3,#0x0]\n\
     bl         fun_080314c0\n\
     bl         fun_08030ba0\n\
LAB_0802ff10:\n\
     lsl        r0,r3,#0x1d\n\
     lsl        r1,r0,#0x8\n\
LAB_0802ff14:\n\
     lsl        r0,r7,#0x1d\n\
     lsl        r1,r0,#0x8\n\
LAB_0802ff18:\n\
     ldr        r0,DAT_0802ff70\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030008\n\
     ldr        r1,DAT_0802ff74\n\
     ldrh       r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     add        r4,r1,#0x0\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802ff34\n\
     bl         fun_08030ba0\n\
LAB_0802ff34:\n\
     ldr        r0,DAT_0802ff78\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_0802ff7c\n\
     add        r5,r0,#0x0\n\
     ldr        r3,DAT_0802ff80\n\
     cmp        r2,r1\n\
     beq        LAB_0802ffa8\n\
     mov        r0,#0x3\n\
     ldrh       r6,[r3,#0x0]\n\
     and        r0,r6\n\
     cmp        r0,#0x0\n\
     bne        LAB_0802ff88\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x0]\n\
     ldr        r2,DAT_0802ff84\n\
     mov        r1,#0x6\n\
LAB_0802ff54:\n\
     ldr        r6,[sp,#0x0]\n\
     lsl        r0,r6,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     cmp        r0,#0x3\n\
     bls        LAB_0802ff54\n\
     b          LAB_0802ffa8\n\
.space 1\n\
.space 1\n\
DAT_0802ff70:\n\
     .word 0x02010440\n\
DAT_0802ff74:\n\
     .word 0x020107DC\n\
DAT_0802ff78:\n\
     .word 0x02010790\n\
DAT_0802ff7c:\n\
     .word 0x000003E7\n\
DAT_0802ff80:\n\
     .word 0x02010834\n\
DAT_0802ff84:\n\
     .word 0x02010840\n\
LAB_0802ff88:\n\
     mov        r0,#0x0\n\
     str        r0,[sp,#0x0]\n\
     ldr        r2,PTR_DAT_0802ffec\n\
     mov        r1,#0x5\n\
LAB_0802ff90:\n\
     ldr        r6,[sp,#0x0]\n\
     lsl        r0,r6,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     cmp        r0,#0x3\n\
     bls        LAB_0802ff90\n\
LAB_0802ffa8:\n\
     mov        r0,#0xa\n\
     strh       r0,[r4,#0x0]\n\
     ldrh       r0,[r3,#0x0]\n\
     sub        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     ble        LAB_0802ffbc\n\
     bl         fun_08030ba0\n\
LAB_0802ffbc:\n\
     ldr        r1,PTR_DAT_0802fff0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802fff4\n\
     ldr        r0,[r5,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802fff8\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_0802fffc\n\
     ldr        r2,DAT_08030000\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08030004\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
     bl         fun_08030ba0\n\
.space 2\n\
PTR_DAT_0802ffec:\n\
     .word       DAT_02010840\n\
PTR_DAT_0802fff0:\n\
     .word       DAT_020025b8\n\
PTR_DAT_0802fff4:\n\
     .word       DAT_020025fc\n\
PTR_DAT_0802fff8:\n\
     .word       DAT_02002558\n\
PTR_DAT_0802fffc:\n\
     .word       DAT_020025e8\n\
DAT_08030000:\n\
     .word 0x00000299\n\
DAT_08030004:\n\
     .word 0x020025C8\n\
LAB_08030008:\n\
     ldr        r0,PTR_DAT_080300ec\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803010c\n\
     ldr        r0,PTR_DAT_080300f0\n\
     ldr        r1,PTR_DAT_080300f4\n\
     ldrh       r2,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r2,r0\n\
     beq        LAB_080300da\n\
     mov        r7,#0x0\n\
     mov        r0,#0x4\n\
     bl         fun_08002c04\n\
     add        r5,r0,#0x0\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     add        r6,r0,#0x0\n\
     ldr        r0,PTR_DAT_080300f8\n\
     lsl        r1,r5,#0x4\n\
     add        r1,r1,r0\n\
     ldr        r2,DAT_080300fc\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     str        r4,[sp,#0x0]\n\
     mov        r0,#0x9\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r9,r0\n\
     mov        r1,#0x3\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     mov        r10,r1\n\
     mov        r2,#0x11\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     mov        r8,r2\n\
LAB_08030056:\n\
     ldr        r4,PTR_DAT_080300f8\n\
     ldr        r3,[sp,#0x0]\n\
     lsl        r3,r3,#0x4\n\
     str        r3,[sp,#0x4]\n\
     ldr        r0,[sp,#0x0]\n\
     cmp        r0,r5\n\
     beq        LAB_0803007e\n\
     lsl        r0,r7,#0x10\n\
     mov        r1,#0xf0\n\
     lsl        r1,r1,#0x11\n\
     add        r0,r0,r1\n\
     add        r3,r3,r4\n\
     ldr        r2,DAT_080300fc\n\
     lsl        r1,r6,#0x1\n\
     add        r1,r1,r2\n\
     lsr        r7,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r0,r1,r0\n\
     strh       r0,[r3,#0x0]\n\
LAB_0803007e:\n\
     ldr        r2,[sp,#0x4]\n\
     add        r4,r2,r4\n\
     mov        r0,r10\n\
     ldrb       r3,[r4,#0x5]\n\
     and        r0,r3\n\
     mov        r1,#0x5\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     mov        r2,r9\n\
     and        r0,r2\n\
     mov        r3,r8\n\
     and        r0,r3\n\
     sub        r1,#0x1c\n\
     and        r0,r1\n\
     strb       r0,[r4,#0x5]\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x8]\n\
     strb       r0,[r4,#0x4]\n\
     mov        r0,#0x6\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08030100\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0xe]\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     ldr        r2,DAT_08030104\n\
     ldr        r1,DAT_08030108\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     cmp        r0,#0x3\n\
     bls        LAB_08030056\n\
     ldr        r1,PTR_DAT_080300ec\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r3,r1,#0x0\n\
LAB_080300da:\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803010c\n\
     mov        r0,#0x14\n\
     bl         fun_08002c04\n\
     bl         fun_08030ba0\n\
.space 2\n\
PTR_DAT_080300ec:\n\
     .word       DAT_0200ecc0\n\
PTR_DAT_080300f0:\n\
     .word       DAT_02005830\n\
PTR_DAT_080300f4:\n\
     .word       DAT_0200ece0\n\
PTR_DAT_080300f8:\n\
     .word       DAT_020107f0\n\
DAT_080300fc:\n\
     .word 0x087C7336\n\
DAT_08030100:\n\
     .word 0x087C7340\n\
DAT_08030104:\n\
     .word 0x0200EDD8\n\
DAT_08030108:\n\
     .word 0x087C734C\n\
LAB_0803010c:\n\
     bl         fun_080316d4\n\
     ldr        r0,PTR_DAT_080301a4\n\
     ldr        r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     ble        LAB_0803015e\n\
     add        r0,r4,#0x0\n\
     mov        r1,#0x1e\n\
     bl         __modsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803015e\n\
     ldr        r1,PTR_DAT_080301a8\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,r4\n\
     beq        LAB_0803015e\n\
     str        r4,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080301ac\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080301b0\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080301b4\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r1,r4]\n\
     cmp        r0,#0xa\n\
     ble        LAB_0803014e\n\
     sub        r0,r2,#0x2\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803014e:\n\
     ldr        r1,PTR_DAT_080301b8\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r1,r5]\n\
     cmp        r0,#0x4\n\
     ble        LAB_0803015e\n\
     sub        r0,r2,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803015e:\n\
     mov        r6,#0x0\n\
     str        r6,[sp,#0x0]\n\
fun_08030162:\n\
     ldr        r0,[sp,#0x0]\n\
     lsl        r1,r0,#0x4\n\
     ldr        r2,PTR_DAT_080301bc\n\
     add        r4,r1,r2\n\
     ldrb       r2,[r4,#0x4]\n\
     lsl        r0,r2,#0x1f\n\
     str        r1,[sp,#0x4]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080301c0\n\
     lsl        r0,r2,#0x1e\n\
     ldr        r3,[sp,#0x0]\n\
     lsl        r3,r3,#0x2\n\
     mov        r9,r3\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030182\n\
     b          LAB_080302a6\n\
LAB_08030182:\n\
     lsr        r0,r2,#0x7\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803018a\n\
     b          LAB_080302a6\n\
LAB_0803018a:\n\
     lsl        r0,r2,#0x1a\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030192\n\
     b          LAB_080302a6\n\
LAB_08030192:\n\
     lsl        r0,r2,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803019a\n\
     b          LAB_080302a6\n\
LAB_0803019a:\n\
     ldr        r0,[sp,#0x0]\n\
     bl         fun_0803104c\n\
     b          LAB_080302a6\n\
.space 2\n\
PTR_DAT_080301a4:\n\
     .word       DAT_02010790\n\
PTR_DAT_080301a8:\n\
     .word       DAT_020107a8\n\
PTR_DAT_080301ac:\n\
     .word       DAT_020107c8\n\
PTR_DAT_080301b0:\n\
     .word       DAT_02010784\n\
PTR_DAT_080301b4:\n\
     .word       DAT_020107c4\n\
PTR_DAT_080301b8:\n\
     .word       DAT_02010740\n\
PTR_DAT_080301bc:\n\
     .word       DAT_020107f0\n\
LAB_080301c0:\n\
     lsl        r0,r2,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030254\n\
     ldrh       r0,[r4,#0x0]\n\
     sub        r0,#0x1\n\
     mov        r1,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     ldr        r5,[sp,#0x0]\n\
     lsl        r5,r5,#0x2\n\
     mov        r9,r5\n\
     cmp        r0,#0x0\n\
     bgt        LAB_080302a6\n\
     ldr        r2,DAT_08030240\n\
     add        r2,r9\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08030244\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r1,DAT_08030248\n\
     ldr        r6,[sp,#0x0]\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r3,#0x4]\n\
     ldr        r0,DAT_0803024c\n\
     add        r5,r5,r0\n\
     ldr        r1,[r5,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     add        r0,#0x19\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r5,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x4]\n\
     ldrb       r1,[r4,#0x4]\n\
     lsl        r0,r1,#0x19\n\
     cmp        r0,#0x0\n\
     blt        LAB_08030222\n\
     ldr        r1,DAT_08030250\n\
     add        r1,r9\n\
     ldr        r2,[r1,#0x0]\n\
     mov        r0,#0xf0\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     strh       r0,[r1,#0x4]\n\
LAB_08030222:\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     add        r6,r0,#0x0\n\
     ldr        r0,[r5,#0x0]\n\
     strh       r6,[r0,#0x0]\n\
     mov        r2,#0x5\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     ldrb       r3,[r4,#0x4]\n\
     and        r0,r3\n\
     mov        r1,#0x1\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x4]\n\
     b          LAB_080302a6\n\
DAT_08030240:\n\
     .word 0x02010840\n\
DAT_08030244:\n\
     .word 0x0000FFD8\n\
DAT_08030248:\n\
     .word 0x087C7356\n\
DAT_0803024c:\n\
     .word 0x020107B0\n\
DAT_08030250:\n\
     .word 0x02010760\n\
LAB_08030254:\n\
     mov        r5,#0x0\n\
     ldrsh      r0,[r4,r5]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_0803026e\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     add        r6,r0,#0x0\n\
     ldr        r0,DAT_0803030c\n\
     lsl        r1,r6,#0x1\n\
     add        r1,r1,r0\n\
     ldrh       r0,[r1,#0x0]\n\
     strh       r0,[r4,#0x0]\n\
LAB_0803026e:\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     ldr        r2,DAT_08030310\n\
     ldr        r1,DAT_08030314\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     ldrb       r6,[r4,#0x5]\n\
     orr        r0,r6\n\
     strb       r0,[r4,#0x5]\n\
     mov        r0,#0x6\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08030318\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0xe]\n\
     mov        r0,#0x4\n\
     ldrb       r1,[r4,#0x4]\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x4]\n\
     ldr        r2,[sp,#0x0]\n\
     lsl        r2,r2,#0x2\n\
     mov        r9,r2\n\
LAB_080302a6:\n\
     ldr        r0,PTR_DAT_0803031c\n\
     mov        r3,r9\n\
     add        r4,r3,r0\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_08030320\n\
     mov        r5,#0x2\n\
     ldrsh      r2,[r0,r5]\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r1,r6]\n\
     cmp        r2,r0\n\
     bgt        LAB_080302be\n\
     b          LAB_08030492\n\
LAB_080302be:\n\
     ldr        r0,PTR_DAT_08030324\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080302c8\n\
     b          LAB_08030492\n\
LAB_080302c8:\n\
     ldr        r0,[sp,#0x4]\n\
     ldr        r1,PTR_DAT_08030328\n\
     add        r2,r0,r1\n\
     ldrh       r1,[r2,#0xe]\n\
     mov        r3,#0xe\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_080302da\n\
     b          LAB_08030492\n\
LAB_080302da:\n\
     sub        r0,r1,#0x1\n\
     mov        r5,#0x0\n\
     strh       r0,[r2,#0xe]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080302e8\n\
     b          LAB_08030492\n\
LAB_080302e8:\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x4\n\
     bne        LAB_080302f2\n\
     b          LAB_08030478\n\
LAB_080302f2:\n\
     cmp        r0,#0x5\n\
     bne        LAB_08030330\n\
     ldrh       r3,[r2,#0x6]\n\
     mov        r5,#0x6\n\
     ldrsh      r0,[r2,r5]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803032c\n\
     sub        r0,r3,#0x1\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x7\n\
     b          LAB_0803047a\n\
.space 1\n\
.space 1\n\
DAT_0803030c:\n\
     .word 0x087C7336\n\
DAT_08030310:\n\
     .word 0x0200EDD8\n\
DAT_08030314:\n\
     .word 0x087C734C\n\
DAT_08030318:\n\
     .word 0x087C7340\n\
PTR_DAT_0803031c:\n\
     .word       DAT_02010840\n\
PTR_DAT_08030320:\n\
     .word       DAT_020107c8\n\
PTR_DAT_08030324:\n\
     .word       DAT_02010778\n\
PTR_DAT_08030328:\n\
     .word       DAT_020107f0\n\
LAB_0803032c:\n\
     mov        r0,#0x6\n\
     b          LAB_0803047a\n\
LAB_08030330:\n\
     cmp        r0,#0x6\n\
     bne        LAB_08030338\n\
     mov        r0,#0x7\n\
     b          LAB_0803047a\n\
LAB_08030338:\n\
     cmp        r0,#0x7\n\
     bne        LAB_08030354\n\
     ldrh       r3,[r2,#0x6]\n\
     mov        r6,#0x6\n\
     ldrsh      r0,[r2,r6]\n\
     cmp        r0,#0x1\n\
     ble        LAB_08030350\n\
     sub        r0,r3,#0x1\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x6\n\
     b          LAB_0803047a\n\
LAB_08030350:\n\
     mov        r0,#0x8\n\
     b          LAB_0803047a\n\
LAB_08030354:\n\
     cmp        r0,#0x8\n\
     bne        LAB_08030370\n\
     ldrh       r3,[r2,#0x6]\n\
     mov        r5,#0x6\n\
     ldrsh      r0,[r2,r5]\n\
     cmp        r0,#0x1\n\
     ble        LAB_0803036c\n\
     sub        r0,r3,#0x1\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x6\n\
     b          LAB_0803047a\n\
LAB_0803036c:\n\
     mov        r0,#0x4\n\
     b          LAB_0803047a\n\
LAB_08030370:\n\
     cmp        r0,#0x2\n\
     bne        LAB_080303fc\n\
     mov        r6,#0x3\n\
     strh       r6,[r1,#0x0]\n\
     ldrh       r1,[r2,#0x2]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803047c\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     lsl        r0,r0,#0x10\n\
     asr        r3,r0,#0x10\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803047c\n\
     mov        r5,#0x3\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     add        r0,r5,#0x0\n\
     ldrb       r6,[r2,#0x4]\n\
     and        r0,r6\n\
     mov        r1,#0x7f\n\
     and        r0,r1\n\
     mov        r1,#0x10\n\
     orr        r0,r1\n\
     mov        r1,#0x20\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x4]\n\
     ldr        r0,DAT_080303ec\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x8]\n\
     ldr        r2,DAT_080303f0\n\
     add        r2,r9\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r3,DAT_080303f4\n\
     add        r0,r3,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     and        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r1,DAT_080303f8\n\
     add        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r3,#0x2]\n\
     ldr        r2,[r2,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x2\n\
     add        r0,r6,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x4\n\
     b          LAB_0803047a\n\
DAT_080303ec:\n\
     .word 0x02010740\n\
DAT_080303f0:\n\
     .word 0x02010720\n\
DAT_080303f4:\n\
     .word 0x0000FDFF\n\
DAT_080303f8:\n\
     .word 0x02010760\n\
LAB_080303fc:\n\
     cmp        r0,#0x3\n\
     bne        LAB_0803047c\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r1,[r2,#0x2]\n\
     mov        r3,#0x2\n\
     ldrsh      r0,[r2,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803047c\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     lsl        r0,r0,#0x10\n\
     asr        r3,r0,#0x10\n\
     cmp        r3,#0x0\n\
     bne        LAB_0803047c\n\
     mov        r5,#0x3\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     add        r0,r5,#0x0\n\
     ldrb       r6,[r2,#0x4]\n\
     and        r0,r6\n\
     mov        r1,#0x7f\n\
     and        r0,r1\n\
     mov        r1,#0x10\n\
     orr        r0,r1\n\
     mov        r1,#0x20\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x4]\n\
     ldr        r0,DAT_080304f4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x8]\n\
     ldr        r2,DAT_080304f8\n\
     add        r2,r9\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r5,DAT_080304fc\n\
     add        r0,r5,#0x0\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r2,#0x0]\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r3,[r2,#0x0]\n\
     ldr        r1,DAT_08030500\n\
     add        r1,r9\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r3,#0x2]\n\
     ldr        r2,[r2,#0x0]\n\
     ldr        r0,[r1,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x0]\n\
LAB_08030478:\n\
     mov        r0,#0x5\n\
LAB_0803047a:\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803047c:\n\
     mov        r0,#0x6\n\
     bl         fun_08002c04\n\
     ldr        r4,[sp,#0x4]\n\
     ldr        r5,DAT_08030504\n\
     add        r2,r4,r5\n\
     ldr        r1,DAT_08030508\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0xe]\n\
LAB_08030492:\n\
     ldr        r6,[sp,#0x4]\n\
     ldr        r0,DAT_08030504\n\
     add        r5,r6,r0\n\
     ldrh       r1,[r5,#0x8]\n\
     mov        r2,#0x8\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_080304a4\n\
     b          LAB_080307b0\n\
LAB_080304a4:\n\
     sub        r0,r1,#0x1\n\
     mov        r3,#0x0\n\
     mov        r8,r3\n\
     strh       r0,[r5,#0x8]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_080304b4\n\
     b          LAB_080307b0\n\
LAB_080304b4:\n\
     ldrb       r3,[r5,#0x4]\n\
     lsl        r0,r3,#0x1b\n\
     cmp        r0,#0x0\n\
     blt        LAB_080304be\n\
     b          LAB_080306b8\n\
LAB_080304be:\n\
     ldr        r1,DAT_080304f8\n\
     mov        r6,r9\n\
     add        r4,r6,r1\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r2,r6]\n\
     add        r0,#0x5\n\
     add        r7,r1,#0x0\n\
     cmp        r0,#0x91\n\
     bgt        LAB_08030510\n\
     ldr        r1,DAT_0803050c\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x1\n\
     add        r0,r3,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     add        r0,r2,#0x0\n\
     mov        r1,#0x0\n\
     bl         fun_0800476c\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x5\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_080304f4\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x8]\n\
     b          LAB_080307b0\n\
DAT_080304f4:\n\
     .word 0x02010740\n\
DAT_080304f8:\n\
     .word 0x02010720\n\
DAT_080304fc:\n\
     .word 0x0000FDFF\n\
DAT_08030500:\n\
     .word 0x02010760\n\
DAT_08030504:\n\
     .word 0x020107F0\n\
DAT_08030508:\n\
     .word 0x087C7340\n\
DAT_0803050c:\n\
     .word 0x02010830\n\
LAB_08030510:\n\
     mov        r6,#0x11\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     add        r0,r6,#0x0\n\
     and        r0,r3\n\
     strb       r0,[r5,#0x4]\n\
     ldr        r3,[r4,#0x0]\n\
     mov        r0,#0x4\n\
     ldrsh      r1,[r3,r0]\n\
     add        r1,#0x1c\n\
     ldr        r0,DAT_080305b4\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r12,r2\n\
     mov        r5,#0x4\n\
     ldrsh      r2,[r2,r5]\n\
     mov        r10,r0\n\
     ldr        r6,DAT_080305b8\n\
     cmp        r1,r2\n\
     bne        LAB_080305ec\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080305fa\n\
     ldr        r0,DAT_080305bc\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_080305ec\n\
     mov        r0,#0x1\n\
     mov        r8,r0\n\
     strh       r0,[r6,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r1,#0x0\n\
     ldrh       r2,[r3,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r3,#0x12]\n\
     ldr        r0,[r7,#0x10]\n\
     mov        r3,#0x3\n\
     strh       r3,[r0,#0x6]\n\
     ldr        r1,[r7,#0x10]\n\
     ldr        r6,DAT_080305c0\n\
     add        r0,r6,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r7,#0x10]\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0xe\n\
     mov        r3,r12\n\
     strh       r0,[r3,#0x0]\n\
     mov        r0,#0xc\n\
     bl         fun_080016f0\n\
     mov        r6,r10\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r0,DAT_080305c4\n\
     ldrh       r3,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x6]\n\
     cmp        r3,r0\n\
     bne        LAB_080305d4\n\
     ldr        r0,[r7,#0x10]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r1,[r7,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r7,#0x10]\n\
     ldr        r0,[r4,#0x0]\n\
     ldrh       r0,[r0,#0x2]\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_080305c8\n\
     mov        r1,r8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_080305cc\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,DAT_080305d0\n\
     mov        r0,#0x4\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x10]\n\
     b          LAB_080307b0\n\
DAT_080305b4:\n\
     .word 0x02010400\n\
DAT_080305b8:\n\
     .word 0x02010774\n\
DAT_080305bc:\n\
     .word 0x0201078C\n\
DAT_080305c0:\n\
     .word 0x0000FDFF\n\
DAT_080305c4:\n\
     .word 0x087C732E\n\
DAT_080305c8:\n\
     .word 0x020107CC\n\
DAT_080305cc:\n\
     .word 0x020107E4\n\
DAT_080305d0:\n\
     .word 0x020107C0\n\
LAB_080305d4:\n\
     ldr        r1,[r7,#0x10]\n\
     add        r0,r3,#0x0\n\
     sub        r0,#0x1e\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r7,#0x10]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x28\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r7,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     b          LAB_080307b0\n\
LAB_080305ec:\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080305fa\n\
     ldr        r0,DAT_08030620\n\
     ldrh       r3,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     beq        LAB_08030628\n\
LAB_080305fa:\n\
     mov        r3,r10\n\
     ldr        r2,[r3,#0x0]\n\
     ldr        r1,DAT_08030624\n\
     ldr        r4,[sp,#0x0]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08030650\n\
     mov        r5,r9\n\
     add        r1,r5,r7\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x0\n\
     mov        r6,#0x3\n\
     strh       r6,[r0,#0x6]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r2,[r0,#0x10]\n\
     b          LAB_08030660\n\
DAT_08030620:\n\
     .word 0x0201078C\n\
DAT_08030624:\n\
     .word 0x087C732E\n\
LAB_08030628:\n\
     mov        r0,r10\n\
     ldr        r2,[r0,#0x0]\n\
     ldr        r1,DAT_0803064c\n\
     ldr        r4,[sp,#0x0]\n\
     lsl        r0,r4,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08030650\n\
     mov        r5,r9\n\
     add        r0,r5,r7\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r6,#0x3\n\
     strh       r6,[r1,#0x6]\n\
     ldr        r0,[r0,#0x0]\n\
     strh       r3,[r0,#0x10]\n\
     b          LAB_08030660\n\
DAT_0803064c:\n\
     .word 0x087C732E\n\
LAB_08030650:\n\
     mov        r0,r9\n\
     add        r1,r0,r7\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x3\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
LAB_08030660:\n\
     ldr        r0,DAT_080306a8\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0xe\n\
     strh       r1,[r0,#0x0]\n\
     mov        r3,r9\n\
     add        r4,r3,r7\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r2,#0xff\n\
     and        r1,r2\n\
     bl         fun_0800476c\n\
     ldr        r5,[sp,#0x4]\n\
     ldr        r6,DAT_080306ac\n\
     add        r2,r5,r6\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r2,#0x5]\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x5]\n\
     ldr        r0,[r4,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     add        r1,#0xa\n\
     mov        r3,#0x0\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x5\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0xf\n\
     strh       r0,[r2,#0x8]\n\
     ldr        r1,DAT_080306b0\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x14\n\
     cmp        r0,#0x0\n\
     blt        LAB_080306b4\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_080307b0\n\
DAT_080306a8:\n\
     .word 0x02010830\n\
DAT_080306ac:\n\
     .word 0x020107F0\n\
DAT_080306b0:\n\
     .word 0x02010790\n\
LAB_080306b4:\n\
     str        r3,[r1,#0x0]\n\
     b          LAB_080307b0\n\
LAB_080306b8:\n\
     ldrb       r1,[r5,#0x5]\n\
     lsl        r0,r1,#0x1e\n\
     cmp        r0,#0x0\n\
     bge        LAB_0803071c\n\
     ldr        r1,DAT_08030714\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r4,DAT_08030718\n\
     add        r4,r9\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x0\n\
     bl         fun_0800476c\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r3,#0x3\n\
     strh       r3,[r0,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r3,[r0,#0x10]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0x3\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x8\n\
     strh       r0,[r1,#0x4]\n\
     mov        r0,#0x4\n\
     ldrb       r4,[r5,#0x5]\n\
     orr        r0,r4\n\
     mov        r6,#0x3\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     add        r1,r6,#0x0\n\
     and        r0,r1\n\
     strb       r0,[r5,#0x5]\n\
     mov        r0,#0xf\n\
     strh       r0,[r5,#0x8]\n\
     mov        r0,#0x42\n\
     bl         fun_0803133c\n\
     b          LAB_080307b0\n\
.space 1\n\
.space 1\n\
DAT_08030714:\n\
     .word 0x02010830\n\
DAT_08030718:\n\
     .word 0x02010720\n\
LAB_0803071c:\n\
     lsl        r0,r1,#0x1d\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030748\n\
     ldr        r2,DAT_08030744\n\
     add        r2,r9\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x2\n\
     strh       r0,[r1,#0x4]\n\
     mov        r1,#0x5\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r0,r1,#0x0\n\
     ldrb       r2,[r5,#0x5]\n\
     and        r0,r2\n\
     mov        r1,#0x8\n\
     b          LAB_08030766\n\
.space 1\n\
.space 1\n\
DAT_08030744:\n\
     .word 0x02010720\n\
LAB_08030748:\n\
     lsl        r0,r1,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030774\n\
     ldr        r0,DAT_08030770\n\
     add        r0,r9\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x5\n\
     strh       r0,[r1,#0x4]\n\
     mov        r3,#0x9\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     add        r0,r3,#0x0\n\
     ldrb       r4,[r5,#0x5]\n\
     and        r0,r4\n\
     mov        r1,#0x10\n\
LAB_08030766:\n\
     orr        r0,r1\n\
     strb       r0,[r5,#0x5]\n\
     mov        r0,#0xf\n\
     strh       r0,[r5,#0x8]\n\
     b          LAB_080307b0\n\
DAT_08030770:\n\
     .word 0x02010720\n\
LAB_08030774:\n\
     lsl        r0,r1,#0x1b\n\
     cmp        r0,#0x0\n\
     bge        LAB_080307a0\n\
     ldr        r0,DAT_0803079c\n\
     add        r0,r9\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x3\n\
     strh       r0,[r1,#0x4]\n\
     mov        r6,#0x11\n\
.syntax unified\n\
    rsbs        r6,r6,#0\n\
.syntax divided\n\
     add        r0,r6,#0x0\n\
     ldrb       r1,[r5,#0x5]\n\
     and        r0,r1\n\
     mov        r1,#0x20\n\
     orr        r0,r1\n\
     strb       r0,[r5,#0x5]\n\
     mov        r0,#0x1e\n\
     strh       r0,[r5,#0x8]\n\
     b          LAB_080307b0\n\
DAT_0803079c:\n\
     .word 0x02010720\n\
LAB_080307a0:\n\
     lsl        r0,r1,#0x1a\n\
     cmp        r0,#0x0\n\
     bge        LAB_080307b0\n\
     mov        r2,#0x21\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r0,r2,#0x0\n\
     and        r0,r1\n\
     strb       r0,[r5,#0x5]\n\
LAB_080307b0:\n\
     ldr        r3,[sp,#0x4]\n\
     ldr        r5,PTR_DAT_0803086c\n\
     add        r4,r3,r5\n\
     ldrb       r6,[r4,#0x4]\n\
     lsr        r0,r6,#0x7\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030830\n\
     ldr        r0,PTR_DAT_08030870\n\
     mov        r1,r9\n\
     add        r3,r1,r0\n\
     ldr        r0,[r3,#0x0]\n\
     ldrh       r1,[r0,#0x2]\n\
     sub        r1,#0x1\n\
     mov        r5,#0x0\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,PTR_DAT_08030874\n\
     add        r1,r9\n\
     ldr        r2,[r1,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r0,#0x46\n\
     bgt        LAB_08030830\n\
     mov        r0,#0x7f\n\
     ldrb       r5,[r4,#0x4]\n\
     and        r0,r5\n\
     strb       r0,[r4,#0x4]\n\
     ldr        r1,[r3,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08030878\n\
     add        r0,r9\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r6,#0x80\n\
     lsl        r6,r6,#0x2\n\
     add        r0,r6,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x6\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_0803087c\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0xe]\n\
     ldr        r0,DAT_08030880\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x2]\n\
     mov        r0,#0x2\n\
     ldrb       r3,[r4,#0x4]\n\
     orr        r0,r3\n\
     strb       r0,[r4,#0x4]\n\
     ldr        r1,DAT_08030884\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x5\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x25\n\
     bl         fun_080016f0\n\
LAB_08030830:\n\
     ldr        r4,[sp,#0x4]\n\
     ldr        r5,PTR_DAT_0803086c\n\
     add        r3,r4,r5\n\
     ldrb       r4,[r3,#0x4]\n\
     lsl        r0,r4,#0x19\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030896\n\
     ldrh       r0,[r3,#0xa]\n\
     sub        r0,#0x1\n\
     mov        r5,#0x0\n\
     strh       r0,[r3,#0xa]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08030896\n\
     ldr        r0,PTR_DAT_08030874\n\
     add        r0,r9\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r2,r6]\n\
     sub        r0,#0x5\n\
     mov        r1,#0x22\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     cmp        r0,r1\n\
     blt        LAB_08030888\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x5\n\
     strh       r0,[r2,#0x2]\n\
     mov        r0,#0x2\n\
     strh       r0,[r3,#0xa]\n\
     b          LAB_08030896\n\
PTR_DAT_0803086c:\n\
     .word       DAT_020107f0\n\
PTR_DAT_08030870:\n\
     .word       DAT_02010840\n\
PTR_DAT_08030874:\n\
     .word       DAT_02010760\n\
PTR_DAT_08030878:\n\
     .word       DAT_020107b0\n\
DAT_0803087c:\n\
     .word 0x087C7340\n\
DAT_08030880:\n\
     .word 0x020107C4\n\
DAT_08030884:\n\
     .word 0x02010790\n\
LAB_08030888:\n\
     mov        r1,#0x41\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r0,r1,#0x0\n\
     and        r0,r4\n\
     strb       r0,[r3,#0x4]\n\
     ldr        r0,PTR_DAT_08030960\n\
     strh       r5,[r0,#0x0]\n\
LAB_08030896:\n\
     ldr        r3,PTR_DAT_08030964\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803091a\n\
     ldr        r2,PTR_DAT_08030968\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r4,#0x0\n\
     ldrsh      r0,[r2,r4]\n\
     cmp        r0,#0x0\n\
     ble        LAB_0803091a\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r6,r0,#0x10\n\
     cmp        r6,#0x0\n\
     bne        LAB_0803091a\n\
     mov        r0,#0x19\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r4,PTR_DAT_0803096c\n\
     ldrb       r0,[r4,#0x0]\n\
     add        r0,#0x1\n\
     strb       r0,[r4,#0x0]\n\
     ldr        r5,PTR_DAT_08030970\n\
     ldr        r0,[r5,#0x10]\n\
     ldrh       r1,[r0,#0x2]\n\
     add        r1,#0xa\n\
     mov        r2,#0x0\n\
     mov        r8,r2\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r7,PTR_DAT_08030974\n\
     ldrh       r1,[r7,#0x0]\n\
     add        r1,#0xe\n\
     strh       r1,[r7,#0x0]\n\
     ldr        r0,[r5,#0x10]\n\
     mov        r2,#0xff\n\
     and        r1,r2\n\
     str        r3,[sp,#0x8]\n\
     bl         fun_0800476c\n\
     ldrb       r2,[r4,#0x0]\n\
     ldr        r3,[sp,#0x8]\n\
     cmp        r2,#0x2\n\
     bne        LAB_0803091a\n\
     ldr        r1,[r5,#0x10]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x2\n\
     add        r0,r4,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,[r5,#0x10]\n\
     mov        r1,#0x3\n\
     strh       r1,[r0,#0x6]\n\
     ldr        r0,[r5,#0x10]\n\
     strh       r2,[r0,#0x10]\n\
     strh       r6,[r3,#0x0]\n\
     ldr        r0,PTR_DAT_08030978\n\
     strh       r6,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x1\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r7,#0x0]\n\
     ldr        r0,[r5,#0x10]\n\
     mov        r1,#0x0\n\
     bl         fun_0800476c\n\
LAB_0803091a:\n\
     ldr        r6,PTR_DAT_0803097c\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030924\n\
     b          LAB_08030a1e\n\
LAB_08030924:\n\
     ldr        r5,PTR_DAT_08030980\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08030a1e\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_08030a1e\n\
     ldr        r3,PTR_DAT_08030984\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803098c\n\
     ldr        r4,PTR_DAT_08030970\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0xa\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
     strh       r2,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_08030988\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_080309ae\n\
PTR_DAT_08030960:\n\
     .word       DAT_0201074c\n\
PTR_DAT_08030964:\n\
     .word       DAT_020107ac\n\
PTR_DAT_08030968:\n\
     .word       DAT_0201079c\n\
PTR_DAT_0803096c:\n\
     .word       DAT_020107d0\n\
PTR_DAT_08030970:\n\
     .word       DAT_02010720\n\
PTR_DAT_08030974:\n\
     .word       DAT_02010830\n\
PTR_DAT_08030978:\n\
     .word       DAT_02010774\n\
PTR_DAT_0803097c:\n\
     .word       DAT_020107cc\n\
PTR_DAT_08030980:\n\
     .word       DAT_020107c0\n\
PTR_DAT_08030984:\n\
     .word       DAT_020107e4\n\
PTR_DAT_08030988:\n\
     .word       DAT_02010838\n\
LAB_0803098c:\n\
     ldr        r2,DAT_080309b4\n\
     ldrh       r1,[r2,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_080309c0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,DAT_080309b8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r6,DAT_080309bc\n\
     ldr        r1,[r6,#0x10]\n\
     ldrh       r0,[r1,#0x2]\n\
     add        r0,#0xa\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r6,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x4]\n\
LAB_080309ae:\n\
     mov        r0,#0x4\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_08030a1e\n\
DAT_080309b4:\n\
     .word 0x02010838\n\
DAT_080309b8:\n\
     .word 0x020107A4\n\
DAT_080309bc:\n\
     .word 0x02010720\n\
LAB_080309c0:\n\
     ldr        r0,PTR_DAT_080309ec\n\
     ldrh       r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_080309fc\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_080309f0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x4\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,PTR_DAT_080309f4\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x8\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_080309f8\n\
     ldr        r0,[r2,#0x10]\n\
     mov        r2,#0xff\n\
     and        r1,r2\n\
     bl         fun_0800476c\n\
     b          LAB_08030a1e\n\
.space 1\n\
.space 1\n\
PTR_DAT_080309ec:\n\
     .word       DAT_020107a4\n\
PTR_DAT_080309f0:\n\
     .word       DAT_02010750\n\
PTR_DAT_080309f4:\n\
     .word       DAT_02010830\n\
PTR_DAT_080309f8:\n\
     .word       DAT_02010720\n\
LAB_080309fc:\n\
     ldr        r5,PTR_DAT_08030a60\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030a1e\n\
     bl         fun_0803162c\n\
     mov        r2,#0x0\n\
     strh       r4,[r5,#0x0]\n\
     ldr        r1,PTR_DAT_08030a64\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     strh       r4,[r6,#0x0]\n\
     ldr        r1,PTR_DAT_08030a68\n\
     mov        r0,#0x19\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08030a6c\n\
     strb       r2,[r0,#0x0]\n\
LAB_08030a1e:\n\
     ldr        r6,PTR_DAT_08030a70\n\
     ldrh       r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030ad8\n\
     ldr        r5,PTR_DAT_08030a74\n\
     ldrh       r1,[r5,#0x0]\n\
     mov        r3,#0x0\n\
     ldrsh      r0,[r5,r3]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08030ad8\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r5,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r2,r0,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_08030ad8\n\
     ldr        r4,PTR_DAT_08030a78\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030a80\n\
     ldr        r6,PTR_DAT_08030a7c\n\
     ldr        r0,[r6,#0x10]\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r6,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     strh       r2,[r4,#0x0]\n\
     mov        r0,#0x28\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_08030ad8\n\
.space 1\n\
.space 1\n\
PTR_DAT_08030a60:\n\
     .word       DAT_02010750\n\
PTR_DAT_08030a64:\n\
     .word       DAT_020107ac\n\
PTR_DAT_08030a68:\n\
     .word       DAT_0201079c\n\
PTR_DAT_08030a6c:\n\
     .word       DAT_020107d0\n\
PTR_DAT_08030a70:\n\
     .word       DAT_02010714\n\
PTR_DAT_08030a74:\n\
     .word       DAT_020107e0\n\
PTR_DAT_08030a78:\n\
     .word       DAT_02010748\n\
PTR_DAT_08030a7c:\n\
     .word       DAT_02010720\n\
LAB_08030a80:\n\
     ldr        r3,DAT_08030ab8\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030ac4\n\
     ldr        r0,DAT_08030abc\n\
     ldr        r1,[r0,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r6,DAT_08030abc\n\
     ldr        r1,[r6,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     add        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     strh       r2,[r4,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     mov        r0,#0x28\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_08030ac0\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r1,#0x5\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,[r6,#0x10]\n\
     mov        r2,#0xff\n\
     and        r1,r2\n\
     bl         fun_0800476c\n\
     b          LAB_08030ad8\n\
DAT_08030ab8:\n\
     .word 0x020107A0\n\
DAT_08030abc:\n\
     .word 0x02010720\n\
DAT_08030ac0:\n\
     .word 0x02010830\n\
LAB_08030ac4:\n\
     strh       r2,[r3,#0x0]\n\
     strh       r2,[r6,#0x0]\n\
     ldr        r0,PTR_DAT_08030b04\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08030b08\n\
     ldr        r0,[r1,#0x10]\n\
     mov        r2,#0x3\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r0,[r1,#0x10]\n\
     strh       r2,[r0,#0x10]\n\
LAB_08030ad8:\n\
     ldr        r3,[sp,#0x4]\n\
     ldr        r4,PTR_DAT_08030b0c\n\
     add        r5,r3,r4\n\
     ldrb       r3,[r5,#0x4]\n\
     lsl        r0,r3,#0x1a\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030b26\n\
     ldr        r0,PTR_DAT_08030b10\n\
     add        r0,r9\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r2,r6]\n\
     sub        r0,#0x1\n\
     mov        r1,#0x22\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     cmp        r0,r1\n\
     blt        LAB_08030b14\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x1\n\
     strh       r0,[r2,#0x2]\n\
     b          LAB_08030b26\n\
.space 1\n\
.space 1\n\
PTR_DAT_08030b04:\n\
     .word       DAT_02010774\n\
PTR_DAT_08030b08:\n\
     .word       DAT_02010720\n\
PTR_DAT_08030b0c:\n\
     .word       DAT_020107f0\n\
PTR_DAT_08030b10:\n\
     .word       DAT_02010840\n\
LAB_08030b14:\n\
     mov        r1,#0x2\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r0,r1,#0x0\n\
     and        r0,r3\n\
     mov        r2,#0x21\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r1,r2,#0x0\n\
     and        r0,r1\n\
     strb       r0,[r5,#0x4]\n\
LAB_08030b26:\n\
     ldr        r5,[sp,#0x4]\n\
     add        r3,r5,r4\n\
     ldrb       r5,[r3,#0x4]\n\
     lsl        r0,r5,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_08030b72\n\
     ldrh       r6,[r3,#0x6]\n\
     cmp        r6,#0x1\n\
     bne        LAB_08030b72\n\
     ldr        r0,DAT_08030b58\n\
     add        r0,r9\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r4,[r2,#0x2]\n\
     mov        r0,#0x2\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r0,#0x3b\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     blt        LAB_08030b60\n\
     ldr        r0,DAT_08030b5c\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,r4,r0\n\
     strh       r0,[r2,#0x2]\n\
     b          LAB_08030b72\n\
.space 1\n\
.space 1\n\
DAT_08030b58:\n\
     .word 0x02010840\n\
DAT_08030b5c:\n\
     .word 0x02010744\n\
LAB_08030b60:\n\
     mov        r1,#0x2\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     add        r0,r1,#0x0\n\
     and        r0,r5\n\
     mov        r2,#0x9\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     add        r1,r2,#0x0\n\
     and        r0,r1\n\
     strb       r0,[r3,#0x4]\n\
LAB_08030b72:\n\
     ldr        r0,[sp,#0x0]\n\
     add        r0,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x0]\n\
     cmp        r0,#0x3\n\
     bhi        LAB_08030b84\n\
     bl         fun_08030162\n\
LAB_08030b84:\n\
     ldr        r0,DAT_08030bb4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        fun_08030ba0\n\
     ldr        r0,DAT_08030bb8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        fun_08030ba0\n\
     ldr        r0,DAT_08030bbc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        fun_08030ba0\n\
     bl         fun_08030bc0\n\
    ");
}
__attribute__((naked)) void fun_08030ba0()
{
    asm("\n\
     mov        r0,#0x0\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_08030bb4:\n\
     .word 0x020107AC\n\
DAT_08030bb8:\n\
     .word 0x020107CC\n\
DAT_08030bbc:\n\
     .word 0x02010714\n\
    ");
}
__attribute__((naked)) void fun_08030bc0()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r2,DAT_08030bfc\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x40\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x0\n\
     beq        LAB_08030ca0\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_08030c00\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,#0x1c\n\
     strh       r0,[r2,#0x0]\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r2,r1]\n\
     sub        r0,#0x24\n\
     ldr        r3,DAT_08030c04\n\
     mov        r4,#0x0\n\
     ldrsh      r1,[r3,r4]\n\
     cmp        r0,r1\n\
     blt        LAB_08030c08\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0x24\n\
     b          LAB_08030c0a\n\
.space 1\n\
.space 1\n\
DAT_08030bfc:\n\
     .word 0x02005CE0\n\
DAT_08030c00:\n\
     .word 0x02010400\n\
DAT_08030c04:\n\
     .word 0x087C732E\n\
LAB_08030c08:\n\
     ldrh       r0,[r3,#0x6]\n\
LAB_08030c0a:\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,DAT_08030c54\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030c68\n\
     ldr        r2,DAT_08030c58\n\
     ldrh       r0,[r2,#0x0]\n\
     ldr        r4,DAT_08030c5c\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030c2c\n\
     ldr        r0,[r4,#0x10]\n\
     ldr        r1,DAT_08030c60\n\
     ldrh       r5,[r0,#0x12]\n\
     and        r1,r5\n\
     strh       r1,[r0,#0x12]\n\
     mov        r0,#0x1\n\
     strh       r0,[r2,#0x0]\n\
LAB_08030c2c:\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r2,#0x3\n\
     strh       r2,[r0,#0x6]\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r0,DAT_08030c64\n\
     ldr        r1,[r0,#0x0]\n\
     strh       r2,[r1,#0x6]\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r2,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x4]\n\
     sub        r0,#0x1e\n\
     strh       r0,[r2,#0x4]\n\
     b          LAB_08031040\n\
DAT_08030c54:\n\
     .word 0x0201078C\n\
DAT_08030c58:\n\
     .word 0x02010780\n\
DAT_08030c5c:\n\
     .word 0x02010760\n\
DAT_08030c60:\n\
     .word 0x0000FFBF\n\
DAT_08030c64:\n\
     .word 0x02010400\n\
LAB_08030c68:\n\
     ldr        r0,DAT_08030c94\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030c72\n\
     b          LAB_08031040\n\
LAB_08030c72:\n\
     ldr        r2,DAT_08030c98\n\
     ldr        r1,[r2,#0x10]\n\
     ldr        r0,DAT_08030c9c\n\
     ldr        r3,[r0,#0x0]\n\
     ldrh       r0,[r3,#0x2]\n\
     sub        r0,#0x21\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r2,#0x10]\n\
     ldrh       r0,[r3,#0x4]\n\
     sub        r0,#0x1e\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x10]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r1,[r2,#0x10]\n\
     b          LAB_08030e7c\n\
.space 1\n\
.space 1\n\
DAT_08030c94:\n\
     .word 0x02010774\n\
DAT_08030c98:\n\
     .word 0x02010720\n\
DAT_08030c9c:\n\
     .word 0x02010400\n\
LAB_08030ca0:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030d5c\n\
     mov        r0,#0xf\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_08030ccc\n\
     ldr        r2,[r0,#0x0]\n\
     strh       r4,[r2,#0x0]\n\
     mov        r6,#0x4\n\
     ldrsh      r0,[r2,r6]\n\
     add        r0,#0x24\n\
     ldr        r3,DAT_08030cd0\n\
     mov        r4,#0x6\n\
     ldrsh      r1,[r3,r4]\n\
     cmp        r0,r1\n\
     bgt        LAB_08030cd4\n\
     ldrh       r0,[r2,#0x4]\n\
     add        r0,#0x24\n\
     b          LAB_08030cd6\n\
DAT_08030ccc:\n\
     .word 0x02010400\n\
DAT_08030cd0:\n\
     .word 0x087C732E\n\
LAB_08030cd4:\n\
     ldrh       r0,[r3,#0x0]\n\
LAB_08030cd6:\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_08030d14\n\
     ldrh       r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_08030d24\n\
     ldr        r3,PTR_DAT_08030d18\n\
     ldrh       r0,[r3,#0x0]\n\
     ldr        r4,PTR_DAT_08030d1c\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030cf8\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r0,#0x40\n\
     mov        r2,#0x0\n\
     ldrh       r5,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     strh       r2,[r3,#0x0]\n\
LAB_08030cf8:\n\
     ldr        r1,[r4,#0x10]\n\
     mov        r2,#0x0\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r2,[r0,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r0,PTR_DAT_08030d20\n\
     ldr        r2,[r0,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     b          LAB_0803103a\n\
PTR_DAT_08030d14:\n\
     .word       DAT_0201078c\n\
PTR_DAT_08030d18:\n\
     .word       DAT_02010780\n\
PTR_DAT_08030d1c:\n\
     .word       DAT_02010760\n\
PTR_DAT_08030d20:\n\
     .word       DAT_02010400\n\
LAB_08030d24:\n\
     ldr        r0,DAT_08030d50\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030d2e\n\
     b          LAB_08031040\n\
LAB_08030d2e:\n\
     ldr        r2,DAT_08030d54\n\
     ldr        r1,[r2,#0x10]\n\
     ldr        r0,DAT_08030d58\n\
     ldr        r3,[r0,#0x0]\n\
     ldrh       r0,[r3,#0x2]\n\
     sub        r0,#0x21\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r2,#0x10]\n\
     ldrh       r0,[r3,#0x4]\n\
     sub        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r2,#0x10]\n\
     strh       r4,[r0,#0x10]\n\
     b          LAB_08031040\n\
DAT_08030d50:\n\
     .word 0x02010774\n\
DAT_08030d54:\n\
     .word 0x02010720\n\
DAT_08030d58:\n\
     .word 0x02010400\n\
LAB_08030d5c:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r3,r0,#0x10\n\
     cmp        r3,#0x0\n\
     bne        LAB_08030d6c\n\
     b          LAB_08030e8c\n\
LAB_08030d6c:\n\
     ldr        r2,DAT_08030e10\n\
     ldr        r3,[r2,#0x0]\n\
     mov        r0,#0xe\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r0,DAT_08030e14\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030e58\n\
     mov        r6,#0x0\n\
     mov        r8,r2\n\
     mov        r7,r8\n\
     ldr        r5,DAT_08030e18\n\
LAB_08030d84:\n\
     ldr        r2,[r7,#0x0]\n\
     ldr        r1,DAT_08030e1c\n\
     lsl        r0,r6,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r2,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r2,r0\n\
     bne        LAB_08030e4c\n\
     ldr        r0,DAT_08030e20\n\
     lsl        r1,r6,#0x4\n\
     add        r4,r1,r0\n\
     ldrb       r1,[r4,#0x4]\n\
     lsl        r0,r1,#0x1e\n\
     cmp        r0,#0x0\n\
     blt        LAB_08030e2c\n\
     lsl        r0,r1,#0x1c\n\
     lsr        r1,r0,#0x1f\n\
     cmp        r1,#0x0\n\
     bne        LAB_08030e2c\n\
     ldr        r0,DAT_08030e14\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,[r5,#0x10]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_08030e24\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x1d\n\
     bl         fun_080016f0\n\
     mov        r0,#0x40\n\
     ldrb       r1,[r4,#0x4]\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x4]\n\
     mov        r0,#0x2\n\
     strh       r0,[r4,#0xa]\n\
     lsl        r2,r6,#0x2\n\
     add        r2,r2,r5\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r3,[r7,#0x0]\n\
     ldrh       r0,[r3,#0x2]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     sub        r0,#0x12\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,[r5,#0x10]\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,[r5,#0x10]\n\
     ldrh       r0,[r0,#0x6]\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r0,[r5,#0x10]\n\
     ldrh       r0,[r0,#0x10]\n\
     strh       r0,[r1,#0x10]\n\
     ldr        r1,[r2,#0x0]\n\
     ldr        r2,DAT_08030e28\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     b          LAB_08030e4c\n\
DAT_08030e10:\n\
     .word 0x02010400\n\
DAT_08030e14:\n\
     .word 0x0201078C\n\
DAT_08030e18:\n\
     .word 0x02010760\n\
DAT_08030e1c:\n\
     .word 0x087C732E\n\
DAT_08030e20:\n\
     .word 0x020107F0\n\
DAT_08030e24:\n\
     .word 0x0201074C\n\
DAT_08030e28:\n\
     .word 0x0000FDFF\n\
LAB_08030e2c:\n\
     ldr        r1,[r5,#0x10]\n\
     mov        r4,r8\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x1e\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r5,#0x10]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0x12\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r5,#0x10]\n\
     mov        r0,#0x3\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r1,[r5,#0x10]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
LAB_08030e4c:\n\
     add        r0,r6,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     cmp        r6,#0x4\n\
     bls        LAB_08030d84\n\
     b          LAB_08031040\n\
LAB_08030e58:\n\
     ldr        r0,DAT_08030e84\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030e62\n\
     b          LAB_08031040\n\
LAB_08030e62:\n\
     ldr        r1,DAT_08030e88\n\
     ldr        r2,[r1,#0x10]\n\
     ldrh       r0,[r3,#0x2]\n\
     sub        r0,#0x28\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r2,[r1,#0x10]\n\
     ldrh       r0,[r3,#0x4]\n\
     sub        r0,#0x1e\n\
     strh       r0,[r2,#0x4]\n\
     ldr        r2,[r1,#0x10]\n\
     mov        r0,#0x3\n\
     strh       r0,[r2,#0x6]\n\
     ldr        r1,[r1,#0x10]\n\
LAB_08030e7c:\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x10]\n\
     b          LAB_08031040\n\
.space 1\n\
.space 1\n\
DAT_08030e84:\n\
     .word 0x02010774\n\
DAT_08030e88:\n\
     .word 0x02010720\n\
LAB_08030e8c:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08030e98\n\
     b          LAB_08031040\n\
LAB_08030e98:\n\
     ldr        r6,PTR_DAT_08030f2c\n\
     ldr        r0,[r6,#0x0]\n\
     strh       r3,[r0,#0x0]\n\
     ldr        r2,PTR_DAT_08030f30\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030eb4\n\
     ldr        r0,PTR_DAT_08030f34\n\
     ldr        r1,[r0,#0x10]\n\
     mov        r0,#0x40\n\
     ldrh       r5,[r1,#0x12]\n\
     orr        r0,r5\n\
     strh       r0,[r1,#0x12]\n\
     strh       r3,[r2,#0x0]\n\
LAB_08030eb4:\n\
     ldr        r0,PTR_DAT_08030f38\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08030f54\n\
     ldr        r4,PTR_DAT_08030f3c\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r5,#0x2\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r3,[r0,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     ldr        r2,[r6,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x21\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0x14\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,DAT_08030f40\n\
     ldrh       r6,[r2,#0x4]\n\
     ldrh       r0,[r0,#0x6]\n\
     cmp        r6,r0\n\
     beq        LAB_08030ee6\n\
     b          LAB_08031040\n\
LAB_08030ee6:\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r5,[r0,#0x6]\n\
     ldr        r0,[r4,#0x10]\n\
     strh       r3,[r0,#0x10]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0x19\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0x14\n\
     strh       r0,[r1,#0x2]\n\
     mov        r0,#0x2a\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_08030f44\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0803162c\n\
     ldr        r1,PTR_DAT_08030f48\n\
     mov        r0,#0x19\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08030f4c\n\
     mov        r0,#0x0\n\
     strb       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08030f50\n\
     mov        r0,#0x87\n\
     lsl        r0,r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x10]\n\
     mov        r1,#0xe\n\
     bl         fun_0800476c\n\
     b          LAB_08031040\n\
.space 1\n\
.space 1\n\
PTR_DAT_08030f2c:\n\
     .word       DAT_02010400\n\
PTR_DAT_08030f30:\n\
     .word       DAT_02010780\n\
PTR_DAT_08030f34:\n\
     .word       DAT_02010760\n\
PTR_DAT_08030f38:\n\
     .word       DAT_02010774\n\
PTR_DAT_08030f3c:\n\
     .word       DAT_02010720\n\
DAT_08030f40:\n\
     .word 0x087C732E\n\
PTR_DAT_08030f44:\n\
     .word       DAT_020107ac\n\
PTR_DAT_08030f48:\n\
     .word       DAT_0201079c\n\
PTR_DAT_08030f4c:\n\
     .word       DAT_020107d0\n\
PTR_DAT_08030f50:\n\
     .word       DAT_02010830\n\
LAB_08030f54:\n\
     ldr        r0,DAT_08030fa0\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     bne        LAB_08031040\n\
     ldr        r3,DAT_08030fa4\n\
     ldr        r0,[r3,#0x10]\n\
     mov        r7,#0x2\n\
     strh       r7,[r0,#0x6]\n\
     ldr        r0,[r3,#0x10]\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r2,[r6,#0x0]\n\
     ldr        r4,DAT_08030fa8\n\
     mov        r0,#0x4\n\
     ldrsh      r1,[r2,r0]\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r4,r6]\n\
     cmp        r1,r0\n\
     bne        LAB_08030fb4\n\
     ldr        r1,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r3,#0x10]\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r1,[r3,#0x10]\n\
     ldr        r0,DAT_08030fac\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_08030fb0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08031018\n\
.space 1\n\
.space 1\n\
DAT_08030fa0:\n\
     .word 0x0201074C\n\
DAT_08030fa4:\n\
     .word 0x02010760\n\
DAT_08030fa8:\n\
     .word 0x087C732E\n\
DAT_08030fac:\n\
     .word 0x0000FDFF\n\
DAT_08030fb0:\n\
     .word 0x0201078C\n\
LAB_08030fb4:\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r4,r6]\n\
     cmp        r1,r0\n\
     bne        LAB_08030fec\n\
     ldr        r1,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r3,#0x10]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r3,#0x10]\n\
     ldr        r0,DAT_08030fe4\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,DAT_08030fe8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08031018\n\
.space 1\n\
.space 1\n\
DAT_08030fe4:\n\
     .word 0x0000FDFF\n\
DAT_08030fe8:\n\
     .word 0x0201078C\n\
LAB_08030fec:\n\
     mov        r5,#0x4\n\
     ldrsh      r0,[r4,r5]\n\
     cmp        r1,r0\n\
     bne        LAB_08031028\n\
     ldr        r1,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r0,[r3,#0x10]\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,[r3,#0x10]\n\
     ldr        r0,DAT_08031020\n\
     ldrh       r6,[r1,#0x12]\n\
     and        r0,r6\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_08031024\n\
     strh       r2,[r0,#0x0]\n\
LAB_08031018:\n\
     mov        r0,#0x24\n\
     bl         fun_080016f0\n\
     b          LAB_08031040\n\
DAT_08031020:\n\
     .word 0x0000FDFF\n\
DAT_08031024:\n\
     .word 0x0201078C\n\
LAB_08031028:\n\
     mov        r5,#0x6\n\
     ldrsh      r0,[r4,r5]\n\
     cmp        r1,r0\n\
     bne        LAB_08031040\n\
     ldr        r1,[r3,#0x10]\n\
     ldrh       r0,[r2,#0x2]\n\
     sub        r0,#0xc\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r1,[r3,#0x10]\n\
LAB_0803103a:\n\
     ldrh       r0,[r2,#0x4]\n\
     sub        r0,#0xa\n\
     strh       r0,[r1,#0x4]\n\
LAB_08031040:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803104c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     mov        r8,r0\n\
     ldr        r0,PTR_DAT_0803110c\n\
     mov        r1,r8\n\
     lsl        r5,r1,#0x2\n\
     add        r0,r5,r0\n\
     ldr        r4,[r0,#0x0]\n\
     mov        r2,#0x2\n\
     ldrsh      r0,[r4,r2]\n\
     add        r2,r0,#0x0\n\
     add        r2,#0x14\n\
     ldr        r1,PTR_DAT_08031110\n\
     add        r0,r5,r1\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r3,r6]\n\
     cmp        r2,r0\n\
     blt        LAB_08031176\n\
     add        r0,#0x18\n\
     cmp        r2,r0\n\
     bgt        LAB_08031176\n\
     mov        r7,#0x4\n\
     ldrsh      r1,[r4,r7]\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r3,r2]\n\
     cmp        r1,r0\n\
     blt        LAB_08031176\n\
     add        r0,#0x24\n\
     cmp        r1,r0\n\
     bgt        LAB_08031176\n\
     ldrh       r1,[r4,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_080310a6\n\
     ldr        r0,PTR_DAT_08031114\n\
     add        r0,r5,r0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_080310c6\n\
LAB_080310a6:\n\
     cmp        r1,#0x1\n\
     bne        LAB_080310b6\n\
     ldr        r0,PTR_DAT_08031114\n\
     add        r0,r5,r0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x2\n\
     beq        LAB_080310c6\n\
LAB_080310b6:\n\
     cmp        r1,#0x2\n\
     bne        LAB_08031176\n\
     ldr        r0,PTR_DAT_08031114\n\
     add        r0,r5,r0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031176\n\
LAB_080310c6:\n\
     mov        r0,r8\n\
     lsl        r3,r0,#0x2\n\
     ldr        r1,PTR_DAT_08031110\n\
     add        r4,r3,r1\n\
     ldr        r0,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_08031118\n\
     mov        r5,#0x2\n\
     ldrsh      r2,[r0,r5]\n\
     mov        r6,#0x0\n\
     ldrsh      r0,[r1,r6]\n\
     add        r7,r3,#0x0\n\
     cmp        r2,r0\n\
     ble        LAB_08031176\n\
     ldr        r1,PTR_DAT_0803111c\n\
     mov        r2,r8\n\
     lsl        r0,r2,#0x4\n\
     add        r2,r0,r1\n\
     mov        r0,#0x41\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r3,[r2,#0x4]\n\
     and        r0,r3\n\
     strb       r0,[r2,#0x4]\n\
     ldr        r1,PTR_DAT_08031120\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r5,#0x2\n\
     ldrsh      r0,[r0,r5]\n\
     cmp        r0,#0x46\n\
     ble        LAB_08031124\n\
     mov        r0,#0x80\n\
     ldrb       r6,[r2,#0x4]\n\
     orr        r0,r6\n\
     strb       r0,[r2,#0x4]\n\
     b          LAB_08031140\n\
PTR_DAT_0803110c:\n\
     .word       DAT_02010760\n\
PTR_DAT_08031110:\n\
     .word       DAT_02010840\n\
PTR_DAT_08031114:\n\
     .word       DAT_020107b0\n\
PTR_DAT_08031118:\n\
     .word       DAT_020107c8\n\
PTR_DAT_0803111c:\n\
     .word       DAT_020107f0\n\
PTR_DAT_08031120:\n\
     .word       DAT_0201074c\n\
LAB_08031124:\n\
     mov        r0,#0x2\n\
     ldrb       r1,[r2,#0x4]\n\
     orr        r0,r1\n\
     strb       r0,[r2,#0x4]\n\
     ldr        r0,PTR_DAT_08031204\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r1,PTR_DAT_08031208\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x5\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x25\n\
     bl         fun_080016f0\n\
LAB_08031140:\n\
     ldr        r0,PTR_DAT_0803120c\n\
     add        r0,r7,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r3,[r1,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,PTR_DAT_08031210\n\
     add        r0,r7,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x6\n\
     bl         fun_08002c04\n\
     ldr        r2,PTR_DAT_08031214\n\
     mov        r5,r8\n\
     lsl        r1,r5,#0x4\n\
     add        r1,r1,r2\n\
     ldr        r2,DAT_08031218\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0xf\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r1,#0xe]\n\
LAB_08031176:\n\
     ldr        r0,PTR_DAT_08031214\n\
     mov        r6,r8\n\
     lsl        r1,r6,#0x4\n\
     add        r4,r1,r0\n\
     ldrb       r1,[r4,#0x4]\n\
     lsr        r0,r1,#0x7\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031188\n\
     b          LAB_0803130c\n\
LAB_08031188:\n\
     lsl        r0,r1,#0x1e\n\
     lsr        r0,r0,#0x1f\n\
     mov        r9,r0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031194\n\
     b          LAB_0803130c\n\
LAB_08031194:\n\
     ldr        r2,PTR_DAT_08031210\n\
     lsl        r6,r6,#0x2\n\
     add        r0,r6,r2\n\
     ldr        r5,[r0,#0x0]\n\
     mov        r7,#0x2\n\
     ldrsh      r3,[r5,r7]\n\
     ldr        r1,DAT_0803121c\n\
     mov        r7,#0x0\n\
     ldrsh      r0,[r1,r7]\n\
     add        r0,r3,r0\n\
     add        r7,r6,#0x0\n\
     mov        r10,r1\n\
     cmp        r0,#0x7f\n\
     bgt        LAB_0803129c\n\
     ldr        r0,DAT_08031220\n\
     ldrh       r1,[r5,#0x2]\n\
     mov        r8,r1\n\
     add        r1,r3,#0x0\n\
     mov        r2,#0x0\n\
     ldrsh      r0,[r0,r2]\n\
     cmp        r1,r0\n\
     ble        LAB_08031274\n\
     ldr        r0,DAT_08031224\n\
     mov        r2,#0x0\n\
     ldrsh      r1,[r0,r2]\n\
     add        r0,r3,#0x0\n\
     bl         __modsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031274\n\
     ldrh       r1,[r4,#0xc]\n\
     mov        r3,#0xc\n\
     ldrsh      r0,[r4,r3]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031248\n\
     ldrb       r7,[r4,#0x5]\n\
     lsl        r0,r7,#0x1f\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031228\n\
     mov        r0,r10\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r2,r8\n\
     add        r0,r2,r1\n\
     strh       r0,[r5,#0x2]\n\
     ldr        r0,PTR_DAT_0803120c\n\
     add        r0,r6,r0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r3,[r0,#0x2]\n\
     add        r1,r1,r3\n\
     strh       r1,[r0,#0x2]\n\
     mov        r0,#0x2\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     ldrb       r5,[r4,#0x5]\n\
     and        r0,r5\n\
     strb       r0,[r4,#0x5]\n\
     b          LAB_0803130c\n\
PTR_DAT_08031204:\n\
     .word       DAT_020107c4\n\
PTR_DAT_08031208:\n\
     .word       DAT_02010790\n\
PTR_DAT_0803120c:\n\
     .word       DAT_020107b0\n\
PTR_DAT_08031210:\n\
     .word       DAT_02010840\n\
PTR_DAT_08031214:\n\
     .word       DAT_020107f0\n\
DAT_08031218:\n\
     .word 0x087C7340\n\
DAT_0803121c:\n\
     .word 0x020107D8\n\
DAT_08031220:\n\
     .word 0x020107C8\n\
DAT_08031224:\n\
     .word 0x02010784\n\
LAB_08031228:\n\
     mov        r0,#0x5\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08031244\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0xf\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0xc]\n\
     mov        r0,#0x1\n\
     ldrb       r6,[r4,#0x5]\n\
     orr        r0,r6\n\
     strb       r0,[r4,#0x5]\n\
     b          LAB_0803130c\n\
DAT_08031244:\n\
     .word 0x087C734C\n\
LAB_08031248:\n\
     sub        r0,r1,#0x1\n\
     strh       r0,[r4,#0xc]\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803130c\n\
     ldr        r0,DAT_0803126c\n\
     add        r0,r6,r0\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08031270\n\
     ldrh       r7,[r1,#0x12]\n\
     and        r0,r7\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,#0x1\n\
     ldrb       r1,[r4,#0x5]\n\
     orr        r0,r1\n\
     strb       r0,[r4,#0x5]\n\
     b          LAB_0803130c\n\
.space 1\n\
.space 1\n\
DAT_0803126c:\n\
     .word 0x020107B0\n\
DAT_08031270:\n\
     .word 0x0000FDFF\n\
LAB_08031274:\n\
     ldr        r2,DAT_08031294\n\
     add        r0,r7,r2\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r3,r10\n\
     ldrh       r1,[r3,#0x0]\n\
     ldrh       r5,[r2,#0x2]\n\
     add        r0,r1,r5\n\
     strh       r0,[r2,#0x2]\n\
     ldr        r0,DAT_08031298\n\
     add        r0,r7,r0\n\
     ldr        r0,[r0,#0x0]\n\
     ldrh       r6,[r0,#0x2]\n\
     add        r1,r1,r6\n\
     strh       r1,[r0,#0x2]\n\
     b          LAB_0803130c\n\
.space 1\n\
.space 1\n\
DAT_08031294:\n\
     .word 0x02010840\n\
DAT_08031298:\n\
     .word 0x020107B0\n\
LAB_0803129c:\n\
     mov        r0,#0x6\n\
     strh       r0,[r5,#0x0]\n\
     ldr        r0,DAT_0803131c\n\
     add        r0,r6,r0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r7,#0x80\n\
     lsl        r7,r7,#0x2\n\
     add        r0,r7,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     mov        r0,r8\n\
     bl         fun_0803133c\n\
     mov        r0,#0x8\n\
     ldrb       r3,[r4,#0x4]\n\
     orr        r0,r3\n\
     strb       r0,[r4,#0x4]\n\
     mov        r0,#0x7\n\
     strh       r0,[r4,#0x6]\n\
     mov        r0,#0x6\n\
     bl         fun_08002c04\n\
     ldr        r1,DAT_08031320\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0xf\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0xe]\n\
     ldr        r0,PTR_DAT_08031324\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803130c\n\
     ldr        r2,PTR_DAT_08031328\n\
     ldr        r1,[r2,#0x10]\n\
     ldr        r0,PTR_DAT_0803132c\n\
     ldr        r3,[r0,#0x0]\n\
     ldrh       r0,[r3,#0x4]\n\
     sub        r0,#0x19\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x10]\n\
     ldrh       r0,[r3,#0x2]\n\
     sub        r0,#0x1e\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,[r2,#0x10]\n\
     mov        r5,r9\n\
     strh       r5,[r0,#0x10]\n\
     ldr        r0,PTR_DAT_08031330\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031334\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08031338\n\
     mov        r0,#0x28\n\
     strh       r0,[r1,#0x0]\n\
     strh       r5,[r3,#0x0]\n\
LAB_0803130c:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803131c:\n\
     .word 0x020107B0\n\
DAT_08031320:\n\
     .word 0x087C7340\n\
PTR_DAT_08031324:\n\
     .word       DAT_02010774\n\
PTR_DAT_08031328:\n\
     .word       DAT_02010720\n\
PTR_DAT_0803132c:\n\
     .word       DAT_02010400\n\
PTR_DAT_08031330:\n\
     .word       DAT_02010714\n\
PTR_DAT_08031334:\n\
     .word       DAT_02010748\n\
PTR_DAT_08031338:\n\
     .word       DAT_020107e0\n\
    ");
}
__attribute__((naked)) void fun_0803133c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     lsl        r0,r0,#0x18\n\
     lsr        r6,r0,#0x18\n\
     ldr        r0,DAT_080313b0\n\
     mov        r5,#0x0\n\
     strh       r5,[r0,#0x0]\n\
     mov        r0,#0x23\n\
     bl         fun_080016f0\n\
     ldr        r4,DAT_080313b4\n\
     ldr        r3,[r4,#0x1c]\n\
     ldrh       r1,[r3,#0x12]\n\
     add        r2,r1,#0x0\n\
     mov        r0,#0x8c\n\
     lsl        r0,r0,#0x2\n\
     cmp        r2,r0\n\
     beq        LAB_08031368\n\
     b          LAB_080314a8\n\
LAB_08031368:\n\
     ldr        r3,[r4,#0x18]\n\
     ldrh       r1,[r3,#0x12]\n\
     cmp        r1,r2\n\
     beq        LAB_08031372\n\
     b          LAB_080314a8\n\
LAB_08031372:\n\
     ldr        r1,[r4,#0x14]\n\
     sub        r0,#0x30\n\
     add        r2,r0,#0x0\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r1,[r4,#0x10]\n\
     ldrh       r0,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_080313b8\n\
     ldr        r0,[r0,#0x10]\n\
     ldrh       r1,[r0,#0x12]\n\
     orr        r2,r1\n\
     strh       r2,[r0,#0x12]\n\
     ldr        r1,DAT_080313bc\n\
     mov        r0,#0x19\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_080313c0\n\
     mov        r0,#0xa\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_080313c4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     cmp        r6,#0x42\n\
     bne        LAB_080313cc\n\
     ldr        r1,DAT_080313c8\n\
     mov        r0,#0x78\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08031430\n\
.space 1\n\
.space 1\n\
DAT_080313b0:\n\
     .word 0x02010754\n\
DAT_080313b4:\n\
     .word 0x02010720\n\
DAT_080313b8:\n\
     .word 0x02010760\n\
DAT_080313bc:\n\
     .word 0x02010834\n\
DAT_080313c0:\n\
     .word 0x020107DC\n\
DAT_080313c4:\n\
     .word 0x02010778\n\
DAT_080313c8:\n\
     .word 0x02010758\n\
LAB_080313cc:\n\
     mov        r3,#0x0\n\
     ldr        r5,DAT_08031400\n\
     ldr        r4,DAT_08031404\n\
     ldr        r0,DAT_08031408\n\
     mov        r12,r0\n\
     ldr        r7,DAT_0803140c\n\
LAB_080313d8:\n\
     cmp        r6,r3\n\
     bne        LAB_08031410\n\
     lsl        r1,r3,#0x2\n\
     add        r0,r1,r5\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,#0x3\n\
     strh       r0,[r2,#0x0]\n\
     add        r1,r1,r7\n\
     ldr        r1,[r1,#0x0]\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     lsl        r0,r3,#0x4\n\
     add        r0,r0,r4\n\
     mov        r1,r12\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_08031426\n\
DAT_08031400:\n\
     .word 0x02010840\n\
DAT_08031404:\n\
     .word 0x020107F0\n\
DAT_08031408:\n\
     .word 0x000003E7\n\
DAT_0803140c:\n\
     .word 0x020107B0\n\
LAB_08031410:\n\
     lsl        r0,r3,#0x4\n\
     add        r0,r0,r4\n\
     ldrb       r0,[r0,#0x4]\n\
     lsl        r0,r0,#0x1c\n\
     cmp        r0,#0x0\n\
     bge        LAB_08031426\n\
     lsl        r0,r3,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031426:\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x3\n\
     bls        LAB_080313d8\n\
LAB_08031430:\n\
     mov        r3,#0x0\n\
     ldr        r2,DAT_080314a4\n\
     mov        r10,r2\n\
     mov        r5,#0x2\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     mov        r0,#0x5\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     mov        r9,r0\n\
     mov        r4,#0x0\n\
     mov        r1,#0x9\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     mov        r12,r1\n\
     mov        r2,#0x41\n\
.syntax unified\n\
    rsbs        r2,r2,#0\n\
.syntax divided\n\
     mov        r8,r2\n\
     mov        r7,#0x3\n\
.syntax unified\n\
    rsbs        r7,r7,#0\n\
.syntax divided\n\
LAB_08031452:\n\
     lsl        r0,r3,#0x4\n\
     mov        r1,r10\n\
     add        r2,r0,r1\n\
     add        r0,r5,#0x0\n\
     ldrb       r1,[r2,#0x4]\n\
     and        r0,r1\n\
     mov        r1,r9\n\
     and        r0,r1\n\
     strb       r0,[r2,#0x4]\n\
     cmp        r6,#0x42\n\
     bne        LAB_08031470\n\
     mov        r1,r12\n\
     and        r0,r1\n\
     strb       r0,[r2,#0x4]\n\
     strh       r4,[r2,#0x0]\n\
LAB_08031470:\n\
     mov        r0,r8\n\
     ldrb       r1,[r2,#0x4]\n\
     and        r0,r1\n\
     and        r0,r7\n\
     mov        r1,#0x11\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     and        r0,r1\n\
     sub        r1,#0x10\n\
     and        r0,r1\n\
     strh       r4,[r2,#0x8]\n\
     mov        r1,#0x7f\n\
     and        r0,r1\n\
     strb       r0,[r2,#0x4]\n\
     strh       r4,[r2,#0xc]\n\
     add        r0,r5,#0x0\n\
     ldrb       r1,[r2,#0x5]\n\
     and        r0,r1\n\
     strb       r0,[r2,#0x5]\n\
     strh       r4,[r2,#0xe]\n\
     add        r0,r3,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r3,r0,#0x18\n\
     cmp        r3,#0x3\n\
     bls        LAB_08031452\n\
     b          LAB_080314b2\n\
.space 1\n\
.space 1\n\
DAT_080314a4:\n\
     .word 0x020107F0\n\
LAB_080314a8:\n\
     mov        r2,#0x80\n\
     lsl        r2,r2,#0x2\n\
     add        r0,r2,#0x0\n\
     orr        r0,r1\n\
     strh       r0,[r3,#0x12]\n\
LAB_080314b2:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080314c0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r4,#0x0\n\
     ldr        r5,PTR_DAT_08031544\n\
LAB_080314c6:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x4\n\
     bls        LAB_080314c6\n\
     mov        r4,#0x0\n\
     ldr        r5,PTR_DAT_08031548\n\
LAB_080314de:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x4\n\
     bls        LAB_080314de\n\
     mov        r4,#0x0\n\
     ldr        r5,PTR_DAT_0803154c\n\
LAB_080314f6:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x3\n\
     bls        LAB_080314f6\n\
     ldr        r2,PTR_DAT_08031550\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08031554\n\
     cmp        r0,r1\n\
     ble        LAB_08031568\n\
     str        r1,[r2,#0x0]\n\
     ldr        r1,PTR_DAT_08031558\n\
     mov        r0,#0x46\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_0803155c\n\
     ldr        r1,PTR_DAT_08031560\n\
     ldr        r0,[r1,#0xc]\n\
     ldrh       r0,[r0,#0x4]\n\
     strh       r0,[r2,#0x0]\n\
     mov        r4,#0x0\n\
     add        r5,r1,#0x0\n\
LAB_0803152a:\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r0,r5\n\
     ldr        r0,[r0,#0x0]\n\
     bl         fun_08003b00\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x3\n\
     bls        LAB_0803152a\n\
     ldr        r6,PTR_DAT_08031564\n\
     b          LAB_08031598\n\
.space 1\n\
.space 1\n\
PTR_DAT_08031544:\n\
     .word       DAT_02010720\n\
PTR_DAT_08031548:\n\
     .word       DAT_02010760\n\
PTR_DAT_0803154c:\n\
     .word       DAT_020107b0\n\
PTR_DAT_08031550:\n\
     .word       DAT_02010790\n\
DAT_08031554:\n\
     .word 0x000003E7\n\
PTR_DAT_08031558:\n\
     .word       DAT_0201077c\n\
PTR_DAT_0803155c:\n\
     .word       DAT_02010850\n\
PTR_DAT_08031560:\n\
     .word       DAT_02010840\n\
PTR_DAT_08031564:\n\
     .word       DAT_02010400\n\
LAB_08031568:\n\
     ldr        r1,PTR_DAT_080315bc\n\
     ldr        r3,PTR_DAT_080315c0\n\
     ldr        r2,[r3,#0x0]\n\
     ldrh       r0,[r2,#0x2]\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080315c4\n\
     ldrh       r0,[r2,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     mov        r4,#0x0\n\
     add        r6,r3,#0x0\n\
     ldr        r3,PTR_DAT_080315c8\n\
     mov        r5,#0x46\n\
     mov        r2,#0x7\n\
LAB_08031582:\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r3\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r5,[r0,#0x2]\n\
     ldr        r0,[r1,#0x0]\n\
     strh       r2,[r0,#0x0]\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x3\n\
     bls        LAB_08031582\n\
LAB_08031598:\n\
     ldr        r0,[r6,#0x0]\n\
     bl         fun_08003b00\n\
     bl         fun_08003bf8\n\
     mov        r0,#0x3\n\
     bl         fun_08002c04\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     bne        LAB_080315d4\n\
     ldr        r0,DAT_080315cc\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080315d0\n\
     b          LAB_080315f8\n\
.space 1\n\
.space 1\n\
PTR_DAT_080315bc:\n\
     .word       DAT_0201077c\n\
PTR_DAT_080315c0:\n\
     .word       DAT_02010400\n\
PTR_DAT_080315c4:\n\
     .word       DAT_02010850\n\
PTR_DAT_080315c8:\n\
     .word       DAT_02010840\n\
DAT_080315cc:\n\
     .word 0x084490F8\n\
DAT_080315d0:\n\
     .word 0x0200DCDC\n\
LAB_080315d4:\n\
     cmp        r4,#0x1\n\
     bne        LAB_080315ec\n\
     ldr        r0,DAT_080315e4\n\
     bl         fun_08003998\n\
     ldr        r1,DAT_080315e8\n\
     b          LAB_080315f8\n\
.space 1\n\
.space 1\n\
DAT_080315e4:\n\
     .word 0x084490D8\n\
DAT_080315e8:\n\
     .word 0x0200DCB0\n\
LAB_080315ec:\n\
     cmp        r4,#0x2\n\
     bne        LAB_08031606\n\
     ldr        r0,DAT_08031618\n\
     bl         fun_08003998\n\
     ldr        r1,PTR_DAT_0803161c\n\
LAB_080315f8:\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08031620\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r1,PTR_DAT_08031624\n\
     ldrh       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x4]\n\
LAB_08031606:\n\
     ldr        r1,PTR_DAT_08031628\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_080316a0\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08031618:\n\
     .word 0x084490E8\n\
PTR_DAT_0803161c:\n\
     .word       DAT_0200dca4\n\
PTR_DAT_08031620:\n\
     .word       DAT_0201077c\n\
PTR_DAT_08031624:\n\
     .word       DAT_02010850\n\
PTR_DAT_08031628:\n\
     .word       DAT_02010440\n\
    ");
}
__attribute__((naked)) void fun_0803162c()
{
    asm("\n\
     push       {lr}\n\
     ldr        r0,DAT_08031670\n\
     ldr        r1,[r0,#0x0]\n\
     add        r1,#0x5\n\
     str        r1,[r0,#0x0]\n\
     ldr        r1,DAT_08031674\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0xa\n\
     bne        LAB_08031680\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     mov        r0,#0x6\n\
     bl         fun_080016f0\n\
     ldr        r3,DAT_08031678\n\
     ldr        r2,[r3,#0x18]\n\
     ldrh       r1,[r2,#0x12]\n\
     mov        r0,#0x8c\n\
     lsl        r0,r0,#0x2\n\
     cmp        r1,r0\n\
     beq        LAB_08031666\n\
     ldr        r2,[r3,#0x1c]\n\
     ldrh       r1,[r2,#0x12]\n\
     cmp        r1,r0\n\
     bne        LAB_08031686\n\
LAB_08031666:\n\
     ldr        r0,DAT_0803167c\n\
     and        r0,r1\n\
     strh       r0,[r2,#0x12]\n\
     b          LAB_08031686\n\
.space 1\n\
.space 1\n\
DAT_08031670:\n\
     .word 0x02010790\n\
DAT_08031674:\n\
     .word 0x02010754\n\
DAT_08031678:\n\
     .word 0x02010720\n\
DAT_0803167c:\n\
     .word 0x0000FDFF\n\
LAB_08031680:\n\
     mov        r0,#0x14\n\
     bl         fun_080016f0\n\
LAB_08031686:\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803168c()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0800457c\n\
     mov        r0,#0x0\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08031698()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_0803169c()
{
    asm("\n\
     mov        r0,#0x1\n\
     bx         lr\n\
    ");
}
__attribute__((naked)) void fun_080316a0()
{
    asm("\n\
     push       {lr}\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_080316c4\n\
     ldr        r0,DAT_080316c8\n\
     ldr        r0,[r0,#0x0]\n\
     lsl        r0,r0,#0x2\n\
     ldr        r2,DAT_080316cc\n\
     add        r1,r1,r2\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r3,DAT_080316d0\n\
     mov        r1,#0x32\n\
     mov        r2,#0x91\n\
     bl         fun_0803c138\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_080316c4:\n\
     .word 0x08669620\n\
DAT_080316c8:\n\
     .word 0x020025B4\n\
DAT_080316cc:\n\
     .word 0x0000C124\n\
DAT_080316d0:\n\
     .word 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_080316d4()
{
    asm("\n\
     push       {lr}\n\
     sub        sp,#0x8\n\
     bl         fun_0803c1a4\n\
     ldr        r1,DAT_080316fc\n\
     ldr        r0,DAT_08031700\n\
     ldr        r2,[r0,#0x0]\n\
     mov        r0,sp\n\
     bl         sprintf\n\
     ldr        r3,DAT_08031704\n\
     mov        r0,sp\n\
     mov        r1,#0x6e\n\
     mov        r2,#0x91\n\
     bl         fun_0803c138\n\
     add        sp,#0x8\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_080316fc:\n\
     .word 0x085EAA14\n\
DAT_08031700:\n\
     .word 0x02010790\n\
DAT_08031704:\n\
     .word 0x0865FD94\n\
    ");
}
__attribute__((naked)) void fun_08031708()
{
    asm("\n\
     ldr        r2,DAT_08031720\n\
     ldr        r0,DAT_08031724\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08031728\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0803172c\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r1,#0x4]\n\
     str        r0,[r1,#0x8]\n\
     mov        r0,#0x1\n\
     bx         lr\n\
DAT_08031720:\n\
     .word 0x02010870\n\
DAT_08031724:\n\
     .word 0x085FF400\n\
DAT_08031728:\n\
     .word 0x02010860\n\
DAT_0803172c:\n\
     .word 0x085FF39C\n\
    ");
}
__attribute__((naked)) void fun_08031730()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     sub        sp,#0xc\n\
     add        r0,sp,#0x8\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,DAT_080318d8\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_080318dc\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     add        r0,sp,#0x8\n\
     strh       r2,[r0,#0x0]\n\
     str        r0,[r1,#0x0]\n\
     mov        r0,#0xa0\n\
     lsl        r0,r0,#0x13\n\
     str        r0,[r1,#0x4]\n\
     ldr        r0,DAT_080318e0\n\
     str        r0,[r1,#0x8]\n\
     ldr        r0,[r1,#0x8]\n\
     sub        r1,#0xd4\n\
     mov        r2,#0xfa\n\
     lsl        r2,r2,#0x5\n\
     add        r0,r2,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_080318e4\n\
     bl         fun_08039e64\n\
     mov        r0,#0x1\n\
     bl         fun_080036b0\n\
     bl         fun_08002e64\n\
     bl         fun_080397a0\n\
     ldr        r0,DAT_080318e8\n\
     bl         fun_08001170\n\
     mov        r0,#0x78\n\
     mov        r1,#0x50\n\
     bl         fun_0803aa28\n\
     bl         fun_08005468\n\
     mov        r4,#0x0\n\
LAB_0803178e:\n\
     lsl        r0,r4,#0x5\n\
     ldr        r5,DAT_080318ec\n\
     add        r0,r0,r5\n\
     mov        r1,#0x2c\n\
     mul        r1,r4\n\
     ldr        r2,DAT_080318f0\n\
     add        r1,r1,r2\n\
     bl         fun_080004ac\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x18\n\
     lsr        r4,r0,#0x18\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803178e\n\
     add        r1,r5,#0x0\n\
     ldr        r0,[r1,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080317ba\n\
     lsl        r0,r4,#0x5\n\
     add        r0,r0,r1\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x10]\n\
LAB_080317ba:\n\
     ldr        r0,DAT_080318f4\n\
     bl         fun_080045f0\n\
     add        r0,r5,#0x0\n\
     mov        r1,#0x1\n\
     bl         fun_0803aa14\n\
     ldr        r0,PTR_DAT_080318f8\n\
     mov        r2,#0x1\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_080318fc\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031900\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031904\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08031908\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0803190c\n\
     mov        r4,#0x0\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031910\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031914\n\
     mov        r1,#0x1e\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031918\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803191c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031920\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031924\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031928\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803192c\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031930\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031934\n\
     strh       r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031938\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803193c\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031940\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031944\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031948\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_0803194c\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08031950\n\
     mov        r0,#0xc8\n\
     lsl        r0,r0,#0x7\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08031954\n\
     mov        r0,#0xbe\n\
     lsl        r0,r0,#0x7\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08031958\n\
     mov        r0,#0x78\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_0803195c\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031960\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031964\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031968\n\
     str        r4,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_0803196c\n\
     mov        r0,#0xe1\n\
     lsl        r0,r0,#0x5\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_08031970\n\
     str        r4,[r0,#0x0]\n\
     ldr        r5,PTR_DAT_08031974\n\
     ldr        r3,DAT_08031978\n\
     ldr        r2,PTR_DAT_0803197c\n\
     add        r1,r3,#0x0\n\
     ldmia      r1!,{r0}\n\
     str        r0,[r2,#0x0]\n\
     ldr        r2,PTR_DAT_08031980\n\
     ldr        r0,[r3,#0x4]\n\
     str        r0,[r2,#0x0]\n\
     add        r1,#0x4\n\
     str        r1,[r5,#0x0]\n\
     ldr        r0,PTR_DAT_08031984\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031988\n\
     str        r4,[r0,#0x0]\n\
     ldr        r5,PTR_DAT_0803198c\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x4\n\
     bl         fun_08039bb4\n\
     add        r2,r0,#0x0\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     str        r2,[r5,#0x0]\n\
     ldr        r0,PTR_DAT_08031990\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031994\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031998\n\
     str        r4,[r0,#0x0]\n\
     mov        r3,#0x1\n\
.syntax unified\n\
    rsbs        r3,r3,#0\n\
.syntax divided\n\
     str        r4,[sp,#0x0]\n\
     str        r4,[sp,#0x4]\n\
     mov        r0,#0x2\n\
     mov        r1,#0x1\n\
     bl         fun_080059c8\n\
     ldr        r1,DAT_0803199c\n\
     ldr        r2,DAT_080319a0\n\
     mov        r0,#0x0\n\
     bl         fun_0803c1ec\n\
     ldr        r5,DAT_080319a4\n\
     str        r4,[r5,#0x0]\n\
     mov        r0,#0x0\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_080318ca\n\
     mov        r0,#0x36\n\
     bl         fun_080016f0\n\
     str        r0,[r5,#0x0]\n\
LAB_080318ca:\n\
     bl         fun_08002fe4\n\
     mov        r0,#0x0\n\
     add        sp,#0xc\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
DAT_080318d8:\n\
     .word 0x040000D4\n\
DAT_080318dc:\n\
     .word 0x8100C000\n\
DAT_080318e0:\n\
     .word 0x81000200\n\
DAT_080318e4:\n\
     .word 0x02010860\n\
DAT_080318e8:\n\
     .word 0x080319A9\n\
DAT_080318ec:\n\
     .word 0x020108F0\n\
DAT_080318f0:\n\
     .word 0x087C7360\n\
DAT_080318f4:\n\
     .word 0x0860E5F8\n\
PTR_DAT_080318f8:\n\
     .word       DAT_02010880\n\
PTR_DAT_080318fc:\n\
     .word       DAT_0201095c\n\
PTR_DAT_08031900:\n\
     .word       DAT_02010964\n\
PTR_DAT_08031904:\n\
     .word       DAT_020108d4\n\
PTR_DAT_08031908:\n\
     .word       DAT_0201088c\n\
PTR_DAT_0803190c:\n\
     .word       DAT_020108a0\n\
PTR_DAT_08031910:\n\
     .word       DAT_02010890\n\
PTR_DAT_08031914:\n\
     .word       DAT_02010884\n\
PTR_DAT_08031918:\n\
     .word       DAT_02010a18\n\
PTR_DAT_0803191c:\n\
     .word       DAT_02010934\n\
PTR_DAT_08031920:\n\
     .word       DAT_020108c0\n\
PTR_DAT_08031924:\n\
     .word       DAT_02010a10\n\
PTR_DAT_08031928:\n\
     .word       DAT_02010910\n\
PTR_DAT_0803192c:\n\
     .word       DAT_020109f8\n\
PTR_DAT_08031930:\n\
     .word       DAT_020108ac\n\
PTR_DAT_08031934:\n\
     .word       DAT_02010914\n\
PTR_DAT_08031938:\n\
     .word       DAT_02010a14\n\
PTR_DAT_0803193c:\n\
     .word       DAT_020108dc\n\
PTR_DAT_08031940:\n\
     .word       DAT_020109fc\n\
PTR_DAT_08031944:\n\
     .word       DAT_02010944\n\
PTR_DAT_08031948:\n\
     .word       DAT_020108e4\n\
PTR_DAT_0803194c:\n\
     .word       DAT_0201094c\n\
PTR_DAT_08031950:\n\
     .word       DAT_02010930\n\
PTR_DAT_08031954:\n\
     .word       DAT_02010898\n\
PTR_DAT_08031958:\n\
     .word       DAT_0200f070\n\
PTR_DAT_0803195c:\n\
     .word       DAT_020109f4\n\
PTR_DAT_08031960:\n\
     .word       DAT_020108e8\n\
PTR_DAT_08031964:\n\
     .word       DAT_02010a1c\n\
PTR_DAT_08031968:\n\
     .word       DAT_020108c8\n\
PTR_DAT_0803196c:\n\
     .word       DAT_02010954\n\
PTR_DAT_08031970:\n\
     .word       DAT_02010950\n\
PTR_DAT_08031974:\n\
     .word       DAT_020109f0\n\
DAT_08031978:\n\
     .word 0x087C73C8\n\
PTR_DAT_0803197c:\n\
     .word       DAT_020108d8\n\
PTR_DAT_08031980:\n\
     .word       DAT_020108b8\n\
PTR_DAT_08031984:\n\
     .word       DAT_02010960\n\
PTR_DAT_08031988:\n\
     .word       DAT_020108d0\n\
PTR_DAT_0803198c:\n\
     .word       DAT_0200f10c\n\
PTR_DAT_08031990:\n\
     .word       DAT_02010958\n\
PTR_DAT_08031994:\n\
     .word       DAT_020108cc\n\
PTR_DAT_08031998:\n\
     .word       DAT_02010a08\n\
DAT_0803199c:\n\
     .word 0x00006739\n\
DAT_080319a0:\n\
     .word 0x00007FFF\n\
DAT_080319a4:\n\
     .word 0x02010888\n\
    ");
}
__attribute__((naked)) void fun_080319a8()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     mov        r6,r8\n\
     push       {r6}\n\
     ldr        r0,DAT_08031a0c\n\
     mov        r8,r0\n\
     ldr        r6,DAT_08031a10\n\
     ldr        r0,[r6,#0x4]\n\
     mov        r1,r8\n\
     str        r0,[r1,#0x0]\n\
     ldr        r5,DAT_08031a14\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0x50\n\
     bl         fun_0800353c\n\
     asr        r0,r0,#0x8\n\
     ldr        r4,DAT_08031a18\n\
     and        r0,r4\n\
     str        r0,[r6,#0x0]\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0x82\n\
     bl         fun_0800353c\n\
     asr        r0,r0,#0x8\n\
     and        r0,r4\n\
     str        r0,[r6,#0x4]\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0xb4\n\
     bl         fun_0800353c\n\
     asr        r0,r0,#0x8\n\
     and        r0,r4\n\
     str        r0,[r6,#0xc]\n\
     ldr        r2,DAT_08031a1c\n\
     ldr        r0,[r6,#0x4]\n\
     mov        r3,r8\n\
     ldr        r1,[r3,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08031a20\n\
     cmp        r0,r1\n\
     bgt        LAB_080319fe\n\
     mov        r0,#0x0\n\
     str        r0,[r2,#0x0]\n\
LAB_080319fe:\n\
     ldr        r0,DAT_08031a24\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031a28\n\
     bl         fun_0803a9ec\n\
     b          LAB_08031a72\n\
DAT_08031a0c:\n\
     .word 0x02010920\n\
DAT_08031a10:\n\
     .word 0x0200EEF0\n\
DAT_08031a14:\n\
     .word 0x020109F4\n\
DAT_08031a18:\n\
     .word 0x000007FF\n\
DAT_08031a1c:\n\
     .word 0x02010948\n\
DAT_08031a20:\n\
     .word 0xFFFFFC18\n\
DAT_08031a24:\n\
     .word 0x02010A1C\n\
LAB_08031a28:\n\
     mov        r4,#0x0\n\
LAB_08031a2a:\n\
     add        r0,r4,#0x0\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x1\n\
     lsl        r0,r4\n\
     mov        r1,#0x20\n\
     lsl        r1,r4\n\
     orr        r0,r1\n\
     bl         fun_08004c04\n\
     cmp        r4,#0x2\n\
     bne        LAB_08031a48\n\
     bl         fun_0803a9ec\n\
     b          LAB_08031a5c\n\
LAB_08031a48:\n\
     ldr        r0,DAT_08031a7c\n\
     lsl        r1,r4,#0x2\n\
     add        r1,r1,r0\n\
     ldr        r1,[r1,#0x0]\n\
     add        r0,r4,#0x0\n\
     mov        r2,#0x0\n\
     bl         fun_08005aa4\n\
     bl         fun_08005060\n\
LAB_08031a5c:\n\
     add        r0,r4,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,#0x3\n\
     bls        LAB_08031a2a\n\
     mov        r0,#0x2\n\
     bl         fun_08004c1c\n\
     mov        r0,#0x84\n\
     bl         fun_08004c04\n\
LAB_08031a72:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08031a7c:\n\
     .word 0x0200EEF0\n\
    ");
}
__attribute__((naked)) void fun_08031a80()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r0,PTR_DAT_08031b20\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031a8c\n\
     b          LAB_08031cba\n\
LAB_08031a8c:\n\
     ldr        r0,PTR_DAT_08031b24\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031a96\n\
     b          LAB_08031cba\n\
LAB_08031a96:\n\
     ldr        r0,PTR_DAT_08031b28\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031aa0\n\
     b          LAB_08031cba\n\
LAB_08031aa0:\n\
     ldr        r0,PTR_DAT_08031b2c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031aaa\n\
     b          LAB_08031cba\n\
LAB_08031aaa:\n\
     ldr        r2,PTR_DAT_08031b30\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031ab8\n\
     ldr        r1,PTR_DAT_08031b34\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031ab8:\n\
     ldr        r0,PTR_DAT_08031b38\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,#0x5f\n\
     ble        LAB_08031ac4\n\
     b          LAB_08031cba\n\
LAB_08031ac4:\n\
     ldr        r0,PTR_DAT_08031b3c\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08031ad0\n\
     strh       r1,[r2,#0x0]\n\
LAB_08031ad0:\n\
     ldr        r2,PTR_DAT_08031b40\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031b06\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031b06\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031b06\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031b06\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031b06\n\
     b          LAB_08031cba\n\
LAB_08031b06:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031b4c\n\
     ldr        r1,PTR_DAT_08031b44\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08031b48\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0xa\n\
     b          LAB_08031b64\n\
PTR_DAT_08031b20:\n\
     .word       DAT_02010a14\n\
PTR_DAT_08031b24:\n\
     .word       DAT_02010914\n\
PTR_DAT_08031b28:\n\
     .word       DAT_02010928\n\
PTR_DAT_08031b2c:\n\
     .word       DAT_0201089c\n\
PTR_DAT_08031b30:\n\
     .word       DAT_020108c0\n\
PTR_DAT_08031b34:\n\
     .word       DAT_02010964\n\
PTR_DAT_08031b38:\n\
     .word       DAT_020108f0\n\
PTR_DAT_08031b3c:\n\
     .word       DAT_02010a18\n\
PTR_DAT_08031b40:\n\
     .word       DAT_02005830\n\
PTR_DAT_08031b44:\n\
     .word       DAT_02010958\n\
PTR_DAT_08031b48:\n\
     .word       DAT_020109ec\n\
LAB_08031b4c:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031b66\n\
     ldr        r1,PTR_DAT_08031bdc\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08031be0\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0xa\n\
LAB_08031b64:\n\
     str        r0,[r1,#0x0]\n\
LAB_08031b66:\n\
     ldr        r0,PTR_DAT_08031be4\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x80\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031b86\n\
     ldr        r1,PTR_DAT_08031be8\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031b82\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031b82\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031b82:\n\
     bl         fun_08032d70\n\
LAB_08031b86:\n\
     ldr        r0,PTR_DAT_08031be4\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x2\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031ba8\n\
     ldr        r1,PTR_DAT_08031be8\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031ba4\n\
     ldr        r0,PTR_DAT_08031bec\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031ba4\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031ba4:\n\
     bl         fun_08032d70\n\
LAB_08031ba8:\n\
     ldr        r0,PTR_DAT_08031bf0\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031c52\n\
     ldr        r0,PTR_DAT_08031bec\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031c46\n\
     mov        r0,#0x18\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_08031bf4\n\
     ldr        r3,[r0,#0x0]\n\
     cmp        r3,#0x0\n\
     ble        LAB_08031bfc\n\
     ldr        r1,PTR_DAT_08031bf8\n\
     lsr        r0,r3,#0x1f\n\
     add        r0,r3,r0\n\
     asr        r0,r0,#0x1\n\
     mov        r2,#0xcd\n\
     lsl        r2,r2,#0x3\n\
     add        r0,r0,r2\n\
     b          LAB_08031c22\n\
.space 1\n\
.space 1\n\
PTR_DAT_08031bdc:\n\
     .word       DAT_02010958\n\
PTR_DAT_08031be0:\n\
     .word       DAT_020109ec\n\
PTR_DAT_08031be4:\n\
     .word       DAT_02005830\n\
PTR_DAT_08031be8:\n\
     .word       DAT_02010964\n\
PTR_DAT_08031bec:\n\
     .word       DAT_02010a18\n\
PTR_DAT_08031bf0:\n\
     .word       DAT_02005ce0\n\
PTR_DAT_08031bf4:\n\
     .word       DAT_020108e8\n\
PTR_DAT_08031bf8:\n\
     .word       DAT_020108dc\n\
LAB_08031bfc:\n\
     cmp        r3,#0x0\n\
     bge        LAB_08031c18\n\
     ldr        r2,DAT_08031c14\n\
     lsr        r1,r3,#0x1f\n\
     add        r1,r3,r1\n\
     asr        r1,r1,#0x1\n\
     mov        r0,#0xcd\n\
     lsl        r0,r0,#0x3\n\
     sub        r0,r0,r1\n\
     str        r0,[r2,#0x0]\n\
     b          LAB_08031c24\n\
.space 1\n\
.space 1\n\
DAT_08031c14:\n\
     .word 0x020108DC\n\
LAB_08031c18:\n\
     cmp        r3,#0x0\n\
     bne        LAB_08031c24\n\
     ldr        r1,PTR_DAT_08031c8c\n\
     mov        r0,#0xcd\n\
     lsl        r0,r0,#0x3\n\
LAB_08031c22:\n\
     str        r0,[r1,#0x0]\n\
LAB_08031c24:\n\
     ldr        r0,PTR_DAT_08031c90\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08031c3a\n\
     ldr        r1,PTR_DAT_08031c94\n\
     ldr        r0,[r1,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031c3a\n\
     mov        r0,#0x8\n\
     strh       r0,[r1,#0x10]\n\
LAB_08031c3a:\n\
     mov        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_08031c98\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08031c9c\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031c46:\n\
     ldr        r2,PTR_DAT_08031c8c\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r1,DAT_08031ca0\n\
     cmp        r0,r1\n\
     ble        LAB_08031c52\n\
     str        r1,[r2,#0x0]\n\
LAB_08031c52:\n\
     ldr        r2,DAT_08031ca4\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r4,#0x1\n\
     add        r0,r4,#0x0\n\
     and        r0,r1\n\
     ldr        r1,PTR_DAT_08031c9c\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031cb0\n\
     ldr        r0,PTR_DAT_08031c90\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031cb0\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031cb0\n\
     ldr        r3,DAT_08031ca8\n\
     ldr        r1,[r3,#0x0]\n\
     cmp        r1,#0xd2\n\
     bhi        LAB_08031cb4\n\
     ldr        r0,DAT_08031cac\n\
     ldr        r0,[r0,#0x0]\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031cb4\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x14\n\
     str        r0,[r3,#0x0]\n\
     b          LAB_08031cb4\n\
.space 1\n\
.space 1\n\
PTR_DAT_08031c8c:\n\
     .word       DAT_020108dc\n\
PTR_DAT_08031c90:\n\
     .word       DAT_02010a18\n\
PTR_DAT_08031c94:\n\
     .word       DAT_020108f0\n\
PTR_DAT_08031c98:\n\
     .word       DAT_02010a04\n\
PTR_DAT_08031c9c:\n\
     .word       DAT_020108a8\n\
DAT_08031ca0:\n\
     .word 0x000006CC\n\
DAT_08031ca4:\n\
     .word 0x02005830\n\
DAT_08031ca8:\n\
     .word 0x02010944\n\
DAT_08031cac:\n\
     .word 0x02010A1C\n\
LAB_08031cb0:\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031cb4:\n\
     ldr        r1,DAT_08031cc0\n\
     ldrh       r0,[r2,#0x0]\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031cba:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08031cc0:\n\
     .word 0x0200F0AC\n\
    ");
}
__attribute__((naked)) void fun_08031cc4()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,PTR_DAT_08031cf4\n\
     ldrh       r0,[r0,#0x0]\n\
     ldr        r3,PTR_DAT_08031cf8\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031d1a\n\
     ldr        r0,PTR_DAT_08031cfc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031d1a\n\
     ldr        r0,PTR_DAT_08031d00\n\
     ldrh       r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_08031d1a\n\
     ldr        r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_08031d0c\n\
     ldr        r0,PTR_DAT_08031d04\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_08031d08\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08031d1a\n\
.space 1\n\
.space 1\n\
PTR_DAT_08031cf4:\n\
     .word       DAT_02005830\n\
PTR_DAT_08031cf8:\n\
     .word       DAT_020108e8\n\
PTR_DAT_08031cfc:\n\
     .word       DAT_02010914\n\
PTR_DAT_08031d00:\n\
     .word       DAT_02010928\n\
PTR_DAT_08031d04:\n\
     .word       DAT_020108e0\n\
PTR_DAT_08031d08:\n\
     .word       DAT_02010918\n\
LAB_08031d0c:\n\
     cmp        r0,#0x0\n\
     bge        LAB_08031d1a\n\
     ldr        r0,DAT_08031d28\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     ldr        r0,DAT_08031d2c\n\
     strh       r2,[r0,#0x0]\n\
LAB_08031d1a:\n\
     ldr        r0,DAT_08031d30\n\
     ldr        r1,[r0,#0x0]\n\
     add        r2,r0,#0x0\n\
     cmp        r1,#0x80\n\
     ble        LAB_08031d34\n\
     mov        r0,#0x80\n\
     b          LAB_08031d3c\n\
DAT_08031d28:\n\
     .word 0x020108E0\n\
DAT_08031d2c:\n\
     .word 0x02010918\n\
DAT_08031d30:\n\
     .word 0x020109EC\n\
LAB_08031d34:\n\
     mov        r0,#0x80\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bge        LAB_08031d3e\n\
LAB_08031d3c:\n\
     str        r0,[r2,#0x0]\n\
LAB_08031d3e:\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r0,[r2,#0x0]\n\
     add        r2,r1,r0\n\
     str        r2,[r3,#0x0]\n\
     cmp        r2,#0x0\n\
     bge        LAB_08031d58\n\
     ldr        r1,DAT_08031d54\n\
.syntax unified\n\
    rsbs        r0,r2,#0\n\
.syntax divided\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_08031d5c\n\
.space 1\n\
.space 1\n\
DAT_08031d54:\n\
     .word 0x02010890\n\
LAB_08031d58:\n\
     ldr        r0,DAT_08031d94\n\
     str        r2,[r0,#0x0]\n\
LAB_08031d5c:\n\
     ldr        r0,DAT_08031d98\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r1,r0\n\
     bgt        LAB_08031d6c\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     bge        LAB_08031d6e\n\
LAB_08031d6c:\n\
     str        r0,[r3,#0x0]\n\
LAB_08031d6e:\n\
     ldr        r0,DAT_08031d9c\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031d7a\n\
     ldr        r0,DAT_08031da0\n\
     str        r0,[r3,#0x0]\n\
LAB_08031d7a:\n\
     ldr        r0,DAT_08031da4\n\
     ldr        r1,[r3,#0x0]\n\
     str        r1,[r0,#0x0]\n\
     ldr        r2,DAT_08031da8\n\
     ldr        r0,[r2,#0x0]\n\
     add        r1,r0,r1\n\
     mov        r0,#0xc8\n\
     lsl        r0,r0,#0x7\n\
     cmp        r1,r0\n\
     ble        LAB_08031dac\n\
     str        r1,[r2,#0x0]\n\
     b          LAB_08031db0\n\
.space 1\n\
.space 1\n\
DAT_08031d94:\n\
     .word 0x02010890\n\
DAT_08031d98:\n\
     .word 0x0201088C\n\
DAT_08031d9c:\n\
     .word 0x0201089C\n\
DAT_08031da0:\n\
     .word 0xFFFFFA00\n\
DAT_08031da4:\n\
     .word 0x0201094C\n\
DAT_08031da8:\n\
     .word 0x02010930\n\
LAB_08031dac:\n\
     mov        r0,#0x0\n\
     str        r0,[r3,#0x0]\n\
LAB_08031db0:\n\
     ldr        r0,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_08031e10\n\
     cmp        r0,#0x0\n\
     ble        LAB_08031dc6\n\
     ldr        r0,PTR_DAT_08031e14\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031dc6\n\
     ldr        r0,[r2,#0x0]\n\
     asr        r0,r0,#0x8\n\
     strh       r0,[r1,#0x4]\n\
LAB_08031dc6:\n\
     ldr        r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08031dda\n\
     ldr        r0,PTR_DAT_08031e18\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031dda\n\
     ldr        r0,[r2,#0x0]\n\
     asr        r0,r0,#0x8\n\
     strh       r0,[r1,#0x4]\n\
LAB_08031dda:\n\
     mov        r2,#0x6\n\
     ldrsh      r0,[r1,r2]\n\
     cmp        r0,#0x96\n\
     ble        LAB_08031e08\n\
     ldr        r5,PTR_DAT_08031e1c\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031e08\n\
     ldr        r0,PTR_DAT_08031e20\n\
     ldrh       r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     bne        LAB_08031e08\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     ldr        r0,PTR_DAT_08031e24\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031e28\n\
     str        r4,[r0,#0x0]\n\
     ldr        r0,PTR_DAT_08031e2c\n\
     str        r4,[r0,#0x0]\n\
     mov        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
LAB_08031e08:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08031e10:\n\
     .word       DAT_020108f0\n\
PTR_DAT_08031e14:\n\
     .word       DAT_020108c4\n\
PTR_DAT_08031e18:\n\
     .word       DAT_020108bc\n\
PTR_DAT_08031e1c:\n\
     .word       DAT_02010928\n\
PTR_DAT_08031e20:\n\
     .word       DAT_02010914\n\
PTR_DAT_08031e24:\n\
     .word       DAT_020108e8\n\
PTR_DAT_08031e28:\n\
     .word       DAT_020109ec\n\
PTR_DAT_08031e2c:\n\
     .word       DAT_020108dc\n\
    ");
}
__attribute__((naked)) void fun_08031e30()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r0,DAT_08031e84\n\
     mov        r8,r0\n\
     mov        r0,#0x0\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r7,DAT_08031e88\n\
     mov        r0,#0x0\n\
     str        r0,[r7,#0x0]\n\
     ldr        r6,DAT_08031e8c\n\
     ldr        r5,DAT_08031e90\n\
     ldr        r1,[r5,#0x0]\n\
     str        r1,[r6,#0x0]\n\
     ldr        r0,DAT_08031e94\n\
     sub        r1,#0x78\n\
     str        r1,[r0,#0x0]\n\
     ldr        r2,DAT_08031e98\n\
     ldr        r0,DAT_08031e9c\n\
     ldr        r0,[r0,#0x0]\n\
     asr        r0,r0,#0x8\n\
     sub        r1,r0,r1\n\
     str        r1,[r2,#0x0]\n\
     ldr        r0,DAT_08031ea0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031ed0\n\
     cmp        r1,#0x64\n\
     bls        LAB_08031ea8\n\
     ldr        r4,DAT_08031ea4\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x14\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r1,#0x50\n\
     bl         fun_0803aa28\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r4,r1]\n\
     add        r0,#0x14\n\
     b          LAB_08031ec2\n\
DAT_08031e84:\n\
     .word 0x02010938\n\
DAT_08031e88:\n\
     .word 0x0201091C\n\
DAT_08031e8c:\n\
     .word 0x0200F104\n\
DAT_08031e90:\n\
     .word 0x0200F070\n\
DAT_08031e94:\n\
     .word 0x02010940\n\
DAT_08031e98:\n\
     .word 0x0201092C\n\
DAT_08031e9c:\n\
     .word 0x02010930\n\
DAT_08031ea0:\n\
     .word 0x02010A14\n\
DAT_08031ea4:\n\
     .word 0x020108F0\n\
LAB_08031ea8:\n\
     cmp        r1,#0x3b\n\
     bhi        LAB_08031ed0\n\
     ldr        r4,DAT_08031edc\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x3c\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r1,#0x50\n\
     bl         fun_0803aa28\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r4,r1]\n\
     add        r0,#0x3c\n\
LAB_08031ec2:\n\
     str        r0,[r5,#0x0]\n\
     ldr        r1,[r6,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[r7,#0x0]\n\
     mov        r0,#0x1\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
LAB_08031ed0:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_08031edc:\n\
     .word 0x020108F0\n\
    ");
}
__attribute__((naked)) void fun_08031ee0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r2,DAT_08031f0c\n\
     mov        r0,#0x0\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r0,DAT_08031f10\n\
     ldr        r1,[r0,#0xc]\n\
     add        r5,r2,#0x0\n\
     add        r4,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08031ef6\n\
     b          LAB_0803210c\n\
LAB_08031ef6:\n\
     ldr        r0,DAT_08031f14\n\
     ldr        r3,[r0,#0x0]\n\
     sub        r2,r3,#0x1\n\
     ldr        r1,DAT_08031f18\n\
     add        r6,r0,#0x0\n\
     cmp        r2,r1\n\
     bhi        LAB_08031f20\n\
     ldr        r1,DAT_08031f1c\n\
     mov        r0,#0x3\n\
     b          LAB_08031f42\n\
.space 1\n\
.space 1\n\
DAT_08031f0c:\n\
     .word 0x02010924\n\
DAT_08031f10:\n\
     .word 0x020108F0\n\
DAT_08031f14:\n\
     .word 0x02010890\n\
DAT_08031f18:\n\
     .word 0x00000171\n\
DAT_08031f1c:\n\
     .word 0x020109E8\n\
LAB_08031f20:\n\
     ldr        r1,DAT_08031f30\n\
     add        r0,r3,r1\n\
     cmp        r0,#0x90\n\
     bhi        LAB_08031f38\n\
     ldr        r1,DAT_08031f34\n\
     mov        r0,#0x3\n\
     b          LAB_08031f42\n\
.space 1\n\
.space 1\n\
DAT_08031f30:\n\
     .word 0xFFFFFE8D\n\
DAT_08031f34:\n\
     .word 0x020109E8\n\
LAB_08031f38:\n\
     ldr        r0,DAT_08031fb8\n\
     cmp        r3,r0\n\
     bls        LAB_08031f44\n\
     ldr        r1,DAT_08031fbc\n\
     mov        r0,#0x5\n\
LAB_08031f42:\n\
     str        r0,[r1,#0x0]\n\
LAB_08031f44:\n\
     ldr        r2,DAT_08031fc0\n\
     ldrh       r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031f52\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031f76\n\
LAB_08031f52:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x20\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031f64\n\
     ldr        r0,DAT_08031fc4\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bgt        LAB_08031f76\n\
LAB_08031f64:\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,#0x10\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031f7a\n\
     ldr        r0,DAT_08031fc4\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bge        LAB_08031f7a\n\
LAB_08031f76:\n\
     mov        r0,#0x1\n\
     strh       r0,[r5,#0x0]\n\
LAB_08031f7a:\n\
     ldr        r0,DAT_08031fc8\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_08031f88\n\
     strh       r1,[r5,#0x0]\n\
     ldr        r0,DAT_08031fcc\n\
     strh       r1,[r0,#0x0]\n\
LAB_08031f88:\n\
     ldr        r3,DAT_08031fd0\n\
     ldrh       r0,[r3,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031fdc\n\
     ldr        r0,DAT_08031fd4\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r2,#0x1\n\
     and        r0,r2\n\
     cmp        r0,#0x0\n\
     bne        LAB_08031fa2\n\
     ldrh       r0,[r4,#0x10]\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x10]\n\
LAB_08031fa2:\n\
     ldr        r0,DAT_08031fc4\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     ldrh       r4,[r4,#0x10]\n\
     cmp        r4,#0xa\n\
     beq        LAB_08031fb0\n\
     b          LAB_0803210c\n\
LAB_08031fb0:\n\
     strh       r1,[r3,#0x0]\n\
     ldr        r0,DAT_08031fd8\n\
     strh       r2,[r0,#0x0]\n\
     b          LAB_0803210c\n\
DAT_08031fb8:\n\
     .word 0x00000203\n\
DAT_08031fbc:\n\
     .word 0x020109E8\n\
DAT_08031fc0:\n\
     .word 0x02005830\n\
DAT_08031fc4:\n\
     .word 0x020108E8\n\
DAT_08031fc8:\n\
     .word 0x02010A14\n\
DAT_08031fcc:\n\
     .word 0x020108C0\n\
DAT_08031fd0:\n\
     .word 0x02010A04\n\
DAT_08031fd4:\n\
     .word 0x02010A1C\n\
DAT_08031fd8:\n\
     .word 0x02010934\n\
LAB_08031fdc:\n\
     ldr        r0,DAT_08031fe8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08031fec\n\
     mov        r0,#0xa\n\
     b          LAB_0803210a\n\
DAT_08031fe8:\n\
     .word 0x02010934\n\
LAB_08031fec:\n\
     ldr        r0,DAT_08032014\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032020\n\
     ldr        r0,DAT_08032018\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032020\n\
     ldr        r0,DAT_0803201c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x5\n\
     bl         __umodsi3\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803200c\n\
     b          LAB_0803210c\n\
LAB_0803200c:\n\
     ldrh       r0,[r4,#0x10]\n\
     add        r0,#0x1\n\
     b          LAB_0803210a\n\
.space 1\n\
.space 1\n\
DAT_08032014:\n\
     .word 0x02010928\n\
DAT_08032018:\n\
     .word 0x020108E4\n\
DAT_0803201c:\n\
     .word 0x02010A1C\n\
LAB_08032020:\n\
     ldr        r0,DAT_0803202c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032030\n\
     mov        r0,#0xa\n\
     b          LAB_0803210a\n\
DAT_0803202c:\n\
     .word 0x02010914\n\
LAB_08032030:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803203a\n\
     mov        r0,#0x6\n\
     b          LAB_0803210a\n\
LAB_0803203a:\n\
     ldr        r0,DAT_08032048\n\
     ldrh       r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803204c\n\
     mov        r0,#0xb\n\
     b          LAB_0803210a\n\
.space 1\n\
.space 1\n\
DAT_08032048:\n\
     .word 0x020108C0\n\
LAB_0803204c:\n\
     ldr        r0,DAT_08032090\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     ble        LAB_080320a4\n\
     ldr        r1,[r4,#0xc]\n\
     ldr        r0,DAT_08032094\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_08032098\n\
     ldr        r1,DAT_0803209c\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[r1,#0x0]\n\
     bl         __umodsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803207a\n\
     ldrh       r0,[r4,#0x10]\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x10]\n\
LAB_0803207a:\n\
     ldrh       r0,[r4,#0x10]\n\
     cmp        r0,#0x1\n\
     beq        LAB_08032084\n\
     cmp        r0,#0x4\n\
     bne        LAB_080320f0\n\
LAB_08032084:\n\
     ldr        r1,DAT_080320a0\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080320e0\n\
     b          LAB_080320f0\n\
.space 1\n\
.space 1\n\
DAT_08032090:\n\
     .word 0x020108E8\n\
DAT_08032094:\n\
     .word 0x0000FFBF\n\
DAT_08032098:\n\
     .word 0x02010A1C\n\
DAT_0803209c:\n\
     .word 0x020109E8\n\
DAT_080320a0:\n\
     .word 0x0201095C\n\
LAB_080320a4:\n\
     cmp        r0,#0x0\n\
     bge        LAB_08032108\n\
     ldr        r1,[r4,#0xc]\n\
     mov        r0,#0x40\n\
     ldrh       r2,[r1,#0x12]\n\
     orr        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
     ldr        r0,DAT_080320e4\n\
     ldr        r1,DAT_080320e8\n\
     ldr        r0,[r0,#0x0]\n\
     ldr        r1,[r1,#0x0]\n\
     bl         __umodsi3\n\
     cmp        r0,#0x0\n\
     bne        LAB_080320ce\n\
     ldrh       r0,[r4,#0x10]\n\
     mov        r1,#0x6\n\
     bl         __umodsi3\n\
     add        r0,#0x1\n\
     strh       r0,[r4,#0x10]\n\
LAB_080320ce:\n\
     ldrh       r0,[r4,#0x10]\n\
     cmp        r0,#0x1\n\
     beq        LAB_080320d8\n\
     cmp        r0,#0x4\n\
     bne        LAB_080320f0\n\
LAB_080320d8:\n\
     ldr        r1,DAT_080320ec\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080320f0\n\
LAB_080320e0:\n\
     strh       r5,[r1,#0x0]\n\
     b          LAB_0803210c\n\
DAT_080320e4:\n\
     .word 0x02010A1C\n\
DAT_080320e8:\n\
     .word 0x020109E8\n\
DAT_080320ec:\n\
     .word 0x0201095C\n\
LAB_080320f0:\n\
     ldrh       r0,[r4,#0x10]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803210c\n\
     cmp        r0,#0x4\n\
     beq        LAB_0803210c\n\
     ldr        r1,DAT_08032104\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803210c\n\
.space 1\n\
.space 1\n\
DAT_08032104:\n\
     .word 0x0201095C\n\
LAB_08032108:\n\
     mov        r0,#0x1\n\
LAB_0803210a:\n\
     strh       r0,[r4,#0x10]\n\
LAB_0803210c:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08032114()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r0,PTR_DAT_08032140\n\
     ldrh       r2,[r0,#0x0]\n\
     mov        r12,r0\n\
     cmp        r2,#0x0\n\
     beq        LAB_080321ec\n\
     ldr        r0,PTR_DAT_08032144\n\
     mov        r2,#0x6\n\
     ldrsh      r1,[r0,r2]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x5e\n\
     bgt        LAB_0803215e\n\
     ldr        r0,PTR_DAT_08032148\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032150\n\
     ldr        r1,PTR_DAT_0803214c\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x2\n\
     b          LAB_0803215c\n\
PTR_DAT_08032140:\n\
     .word       DAT_02010914\n\
PTR_DAT_08032144:\n\
     .word       DAT_020108f0\n\
PTR_DAT_08032148:\n\
     .word       DAT_02010918\n\
PTR_DAT_0803214c:\n\
     .word       DAT_020108e8\n\
LAB_08032150:\n\
     ldr        r0,DAT_0803217c\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803215e\n\
     ldr        r1,DAT_08032180\n\
     ldr        r0,DAT_08032184\n\
LAB_0803215c:\n\
     str        r0,[r1,#0x0]\n\
LAB_0803215e:\n\
     ldr        r1,DAT_08032188\n\
     ldr        r3,DAT_0803218c\n\
     ldr        r0,[r1,#0x0]\n\
     ldr        r2,[r3,#0x0]\n\
     sub        r0,r0,r2\n\
     str        r0,[r1,#0x0]\n\
     sub        r2,#0x80\n\
     str        r2,[r3,#0x0]\n\
     add        r3,r1,#0x0\n\
     cmp        r2,#0x0\n\
     bge        LAB_08032194\n\
     ldr        r1,DAT_08032190\n\
     mov        r0,#0x1\n\
     b          LAB_0803219c\n\
.space 1\n\
.space 1\n\
DAT_0803217c:\n\
     .word 0x020108E0\n\
DAT_08032180:\n\
     .word 0x020108E8\n\
DAT_08032184:\n\
     .word 0xFFFFFD00\n\
DAT_08032188:\n\
     .word 0x02010898\n\
DAT_0803218c:\n\
     .word 0x020108DC\n\
DAT_08032190:\n\
     .word 0x020109F8\n\
LAB_08032194:\n\
     cmp        r2,#0x0\n\
     ble        LAB_0803219e\n\
     ldr        r1,PTR_DAT_080321d8\n\
     mov        r0,#0x0\n\
LAB_0803219c:\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803219e:\n\
     ldr        r0,[r3,#0x0]\n\
     lsr        r0,r0,#0x8\n\
     mov        r2,#0x0\n\
     strh       r0,[r5,#0x6]\n\
     ldr        r0,PTR_DAT_080321dc\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080321b0\n\
     b          LAB_0803230a\n\
LAB_080321b0:\n\
     ldr        r0,PTR_DAT_080321d8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080321ba\n\
     b          LAB_0803230a\n\
LAB_080321ba:\n\
     mov        r0,r12\n\
     strh       r2,[r0,#0x0]\n\
     ldr        r1,PTR_DAT_080321e0\n\
     mov        r0,#0x1e\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080321e4\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x5f\n\
     strh       r0,[r5,#0x6]\n\
     mov        r0,#0xbe\n\
     lsl        r0,r0,#0x7\n\
     str        r0,[r3,#0x0]\n\
     ldr        r0,PTR_DAT_080321e8\n\
     str        r2,[r0,#0x0]\n\
     b          LAB_0803230a\n\
PTR_DAT_080321d8:\n\
     .word       DAT_020109f8\n\
PTR_DAT_080321dc:\n\
     .word       DAT_02010910\n\
PTR_DAT_080321e0:\n\
     .word       DAT_020108e4\n\
PTR_DAT_080321e4:\n\
     .word       DAT_02010a18\n\
PTR_DAT_080321e8:\n\
     .word       DAT_020108e8\n\
LAB_080321ec:\n\
     ldr        r0,PTR_DAT_0803221c\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r8,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_080321f8\n\
     b          LAB_0803230a\n\
LAB_080321f8:\n\
     ldr        r0,PTR_DAT_08032220\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032208\n\
     ldr        r1,PTR_DAT_08032224\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
LAB_08032208:\n\
     ldr        r0,PTR_DAT_08032228\n\
     ldr        r1,[r0,#0x0]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     bge        LAB_08032230\n\
     ldr        r1,PTR_DAT_0803222c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_08032238\n\
.space 1\n\
.space 1\n\
PTR_DAT_0803221c:\n\
     .word       DAT_02010934\n\
PTR_DAT_08032220:\n\
     .word       DAT_02010a14\n\
PTR_DAT_08032224:\n\
     .word       DAT_020108e8\n\
PTR_DAT_08032228:\n\
     .word       DAT_020108dc\n\
PTR_DAT_0803222c:\n\
     .word       DAT_020109f8\n\
LAB_08032230:\n\
     cmp        r1,#0x0\n\
     ble        LAB_08032238\n\
     ldr        r0,PTR_DAT_080322ac\n\
     strh       r2,[r0,#0x0]\n\
LAB_08032238:\n\
     ldr        r2,PTR_DAT_080322b0\n\
     ldr        r0,[r2,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_080322b4\n\
     lsl        r1,r0,#0x6\n\
     add        r1,r1,r0\n\
     str        r1,[r3,#0x0]\n\
     mov        r0,#0x80\n\
     lsl        r0,r0,#0x3\n\
     add        r7,r2,#0x0\n\
     add        r6,r3,#0x0\n\
     cmp        r1,r0\n\
     ble        LAB_08032256\n\
     str        r0,[r6,#0x0]\n\
LAB_08032256:\n\
     ldr        r3,PTR_DAT_080322b8\n\
     ldr        r4,PTR_DAT_080322bc\n\
     ldr        r2,[r5,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     add        r1,r2,r1\n\
     ldr        r0,[r3,#0x0]\n\
     sub        r0,r0,r1\n\
     str        r0,[r3,#0x0]\n\
     sub        r2,#0x80\n\
     str        r2,[r5,#0x0]\n\
     ldr        r0,PTR_DAT_080322c0\n\
     mov        r2,#0x6\n\
     ldrsh      r1,[r0,r2]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x97\n\
     ble        LAB_08032280\n\
     mov        r0,#0x97\n\
     strh       r0,[r5,#0x6]\n\
     mov        r0,#0x97\n\
     lsl        r0,r0,#0x8\n\
     str        r0,[r3,#0x0]\n\
LAB_08032280:\n\
     ldr        r0,PTR_DAT_080322c4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032304\n\
     ldr        r0,PTR_DAT_080322ac\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032304\n\
     mov        r1,r12\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032304\n\
     mov        r2,#0x6\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r0,#0x73\n\
     ble        LAB_080322c8\n\
     mov        r0,#0x97\n\
     strh       r0,[r5,#0x6]\n\
     mov        r0,#0x97\n\
     lsl        r0,r0,#0x8\n\
     b          LAB_080322d0\n\
.space 1\n\
.space 1\n\
PTR_DAT_080322ac:\n\
     .word       DAT_020109f8\n\
PTR_DAT_080322b0:\n\
     .word       DAT_020108a0\n\
PTR_DAT_080322b4:\n\
     .word       DAT_0201088c\n\
PTR_DAT_080322b8:\n\
     .word       DAT_02010898\n\
PTR_DAT_080322bc:\n\
     .word       DAT_02010944\n\
PTR_DAT_080322c0:\n\
     .word       DAT_020108f0\n\
PTR_DAT_080322c4:\n\
     .word       DAT_02010910\n\
LAB_080322c8:\n\
     mov        r0,#0x5f\n\
     strh       r0,[r5,#0x6]\n\
     mov        r0,#0xbe\n\
     lsl        r0,r0,#0x7\n\
LAB_080322d0:\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r6,#0x0]\n\
     mov        r0,#0x0\n\
     str        r0,[r7,#0x0]\n\
     ldr        r1,PTR_DAT_080322f4\n\
     strh       r0,[r1,#0x0]\n\
     mov        r1,r8\n\
     strh       r0,[r1,#0x0]\n\
     str        r0,[r4,#0x0]\n\
     ldr        r1,PTR_DAT_080322f8\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080322fc\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_08032300\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_0803230a\n\
PTR_DAT_080322f4:\n\
     .word       DAT_02010a18\n\
PTR_DAT_080322f8:\n\
     .word       DAT_020108a8\n\
PTR_DAT_080322fc:\n\
     .word       DAT_020108e8\n\
PTR_DAT_08032300:\n\
     .word       DAT_020109ec\n\
LAB_08032304:\n\
     ldr        r0,[r3,#0x0]\n\
     lsr        r0,r0,#0x8\n\
     strh       r0,[r5,#0x6]\n\
LAB_0803230a:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_08032314()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     ldr        r1,PTR_DAT_08032424\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_08032428\n\
     mov        r9,r2\n\
     strh       r0,[r2,#0x0]\n\
     ldr        r3,PTR_DAT_0803242c\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r1,PTR_DAT_08032430\n\
     strh       r0,[r1,#0x0]\n\
     mov        r7,#0x1\n\
     ldr        r2,PTR_DAT_08032434\n\
     strh       r7,[r2,#0x0]\n\
     ldr        r4,PTR_DAT_08032438\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     sub        r1,#0x4\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r3,PTR_DAT_0803243c\n\
     str        r0,[r3,#0x0]\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     sub        r1,#0x4\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r1,PTR_DAT_08032440\n\
     str        r0,[r1,#0x0]\n\
     ldr        r2,PTR_DAT_08032444\n\
     mov        r10,r2\n\
     ldrh       r0,[r4,#0x4]\n\
     sub        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     sub        r1,#0x4\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r3,r10\n\
     str        r0,[r3,#0x0]\n\
     ldr        r6,PTR_DAT_08032448\n\
     ldrh       r0,[r4,#0x4]\n\
     ldrh       r1,[r4,#0x6]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     str        r0,[r6,#0x0]\n\
     ldr        r5,PTR_DAT_0803244c\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r0,#0x4\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldrh       r1,[r4,#0x6]\n\
     add        r1,#0x1\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     str        r2,[r5,#0x0]\n\
     ldr        r6,[r6,#0x0]\n\
     mov        r1,#0x2\n\
     add        r0,r6,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080323d0\n\
     ldr        r0,PTR_DAT_08032424\n\
     strh       r7,[r0,#0x0]\n\
LAB_080323d0:\n\
     mov        r3,r10\n\
     ldr        r0,[r3,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080323de\n\
     ldr        r0,PTR_DAT_0803242c\n\
     strh       r7,[r0,#0x0]\n\
LAB_080323de:\n\
     ldr        r3,PTR_DAT_08032440\n\
     ldr        r0,[r3,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080323ec\n\
     ldr        r0,PTR_DAT_08032430\n\
     strh       r7,[r0,#0x0]\n\
LAB_080323ec:\n\
     add        r0,r2,#0x0\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_080323fa\n\
     mov        r2,r8\n\
     ldr        r1,PTR_DAT_08032434\n\
     strh       r2,[r1,#0x0]\n\
LAB_080323fa:\n\
     mov        r1,#0x4\n\
     and        r6,r1\n\
     cmp        r6,#0x0\n\
     beq        LAB_08032406\n\
     mov        r3,r9\n\
     strh       r7,[r3,#0x0]\n\
LAB_08032406:\n\
     ldr        r2,PTR_DAT_0803243c\n\
     ldr        r0,[r2,#0x0]\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032414\n\
     mov        r3,r9\n\
     strh       r7,[r3,#0x0]\n\
LAB_08032414:\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_DAT_08032424:\n\
     .word       DAT_02010910\n\
PTR_DAT_08032428:\n\
     .word       DAT_02010a10\n\
PTR_DAT_0803242c:\n\
     .word       DAT_020108bc\n\
PTR_DAT_08032430:\n\
     .word       DAT_020108c4\n\
PTR_DAT_08032434:\n\
     .word       DAT_020108b4\n\
PTR_DAT_08032438:\n\
     .word       DAT_020108f0\n\
PTR_DAT_0803243c:\n\
     .word       DAT_020108b0\n\
PTR_DAT_08032440:\n\
     .word       DAT_02010894\n\
PTR_DAT_08032444:\n\
     .word       DAT_0201093c\n\
PTR_DAT_08032448:\n\
     .word       DAT_02010968\n\
PTR_DAT_0803244c:\n\
     .word       DAT_02010a0c\n\
    ");
}
__attribute__((naked)) void fun_08032450()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     ldr        r1,DAT_08032554\n\
     ldr        r0,DAT_08032558\n\
     ldr        r0,[r0,#0x0]\n\
     asr        r0,r0,#0x8\n\
     ldr        r1,[r1,#0x0]\n\
     cmp        r1,r0\n\
     ble        LAB_08032466\n\
     b          LAB_08032592\n\
LAB_08032466:\n\
     ldr        r0,DAT_0803255c\n\
     ldr        r0,[r0,#0x0]\n\
     add        r0,#0x98\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r1,#0x5f\n\
     bl         fun_0803ab18\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     ldr        r0,DAT_08032560\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r0,#0x4\n\
     cmp        r0,#0x2\n\
     bls        LAB_0803248e\n\
     mov        r0,#0xa\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803248e\n\
     b          LAB_08032592\n\
LAB_0803248e:\n\
     ldr        r4,DAT_08032564\n\
     mov        r2,#0x0\n\
     ldr        r1,DAT_08032568\n\
     add        r5,r1,#0x0\n\
LAB_08032496:\n\
     lsl        r3,r2,#0x10\n\
     asr        r2,r3,#0x10\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r0,r5\n\
     ldrh       r0,[r0,#0x4]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080324aa\n\
     lsr        r4,r3,#0x10\n\
LAB_080324aa:\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x9\n\
     ble        LAB_08032496\n\
     lsl        r0,r4,#0x10\n\
     asr        r2,r0,#0x10\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r2,r0\n\
     beq        LAB_08032592\n\
     lsl        r0,r2,#0x1\n\
     add        r0,r0,r2\n\
     lsl        r0,r0,#0x2\n\
     add        r4,r0,r1\n\
     mov        r0,#0x0\n\
     mov        r8,r0\n\
     mov        r6,#0x1\n\
     strh       r6,[r4,#0x4]\n\
     mov        r0,#0x1\n\
     mov        r5,#0x0\n\
     ldr        r7,DAT_08032560\n\
     ldr        r1,[r7,#0x0]\n\
     cmp        r1,#0x0\n\
     bne        LAB_080324e2\n\
     mov        r0,#0x2\n\
     mov        r5,#0x3\n\
LAB_080324e2:\n\
     cmp        r1,#0x1\n\
     bne        LAB_080324ea\n\
     mov        r0,#0x2\n\
     mov        r5,#0x3\n\
LAB_080324ea:\n\
     cmp        r1,#0x2\n\
     bne        LAB_080324f2\n\
     mov        r0,#0x2\n\
     mov        r5,#0x3\n\
LAB_080324f2:\n\
     cmp        r1,#0x4\n\
     bne        LAB_080324fa\n\
     mov        r0,#0x0\n\
     mov        r5,#0x0\n\
LAB_080324fa:\n\
     cmp        r1,#0x5\n\
     bne        LAB_08032502\n\
     mov        r0,#0x0\n\
     mov        r5,#0x0\n\
LAB_08032502:\n\
     cmp        r1,#0x6\n\
     bne        LAB_0803250a\n\
     mov        r0,#0x0\n\
     mov        r5,#0x0\n\
LAB_0803250a:\n\
     lsl        r0,r0,#0x4\n\
     ldr        r1,DAT_0803256c\n\
     add        r0,r0,r1\n\
     bl         fun_08003998\n\
     str        r0,[r4,#0x0]\n\
     mov        r1,#0xf0\n\
     strh       r1,[r0,#0x2]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r5,[r0,#0x0]\n\
     ldr        r1,[r4,#0x0]\n\
     mov        r0,#0x2\n\
     strh       r0,[r1,#0x6]\n\
     ldr        r0,[r4,#0x0]\n\
     strh       r6,[r0,#0x10]\n\
     mov        r0,r8\n\
     strh       r0,[r4,#0x8]\n\
     mov        r0,#0x6c\n\
     strh       r0,[r4,#0xa]\n\
     mov        r0,r8\n\
     strh       r0,[r4,#0x6]\n\
     ldr        r0,[r7,#0x0]\n\
     sub        r0,#0x4\n\
     cmp        r0,#0x2\n\
     bhi        LAB_08032570\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x88\n\
     lsl        r1,r1,#0x1\n\
     strh       r1,[r0,#0x2]\n\
     mov        r0,#0x14\n\
     strh       r0,[r4,#0xa]\n\
     strh       r6,[r4,#0x6]\n\
     mov        r0,#0x2\n\
     bl         fun_080016f0\n\
     b          LAB_08032576\n\
.space 1\n\
.space 1\n\
DAT_08032554:\n\
     .word 0x020108D8\n\
DAT_08032558:\n\
     .word 0x02010930\n\
DAT_0803255c:\n\
     .word 0x0200F070\n\
DAT_08032560:\n\
     .word 0x020108B8\n\
DAT_08032564:\n\
     .word 0x0000FFFF\n\
DAT_08032568:\n\
     .word 0x02010970\n\
DAT_0803256c:\n\
     .word 0x0860E5B8\n\
LAB_08032570:\n\
     mov        r0,#0xe\n\
     bl         fun_080016f0\n\
LAB_08032576:\n\
     ldr        r3,DAT_0803259c\n\
     ldr        r2,DAT_080325a0\n\
     ldr        r1,[r2,#0x0]\n\
     ldmia      r1!,{r0}\n\
     str        r0,[r3,#0x0]\n\
     str        r1,[r2,#0x0]\n\
     ldr        r3,DAT_080325a4\n\
     ldmia      r1!,{r0}\n\
     str        r0,[r3,#0x0]\n\
     str        r1,[r2,#0x0]\n\
     ldr        r1,DAT_080325a8\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_08032592:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803259c:\n\
     .word 0x020108D8\n\
DAT_080325a0:\n\
     .word 0x020109F0\n\
DAT_080325a4:\n\
     .word 0x020108B8\n\
DAT_080325a8:\n\
     .word 0x02010A08\n\
    ");
}
__attribute__((naked)) void fun_080325ac()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r8\n\
     push       {r7}\n\
     mov        r1,#0x0\n\
     ldr        r0,DAT_0803263c\n\
     mov        r8,r0\n\
LAB_080325b8:\n\
     ldr        r2,DAT_0803263c\n\
     lsl        r1,r1,#0x10\n\
     asr        r3,r1,#0x10\n\
     lsl        r0,r3,#0x1\n\
     add        r0,r0,r3\n\
     lsl        r0,r0,#0x2\n\
     add        r4,r0,r2\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r7,r1,#0x0\n\
     cmp        r0,#0x0\n\
     bne        LAB_080325d0\n\
     b          LAB_08032756\n\
LAB_080325d0:\n\
     ldr        r1,DAT_08032640\n\
     lsl        r0,r3,#0x2\n\
     add        r3,r0,r1\n\
     ldr        r2,[r3,#0x0]\n\
     mov        r5,#0x1\n\
.syntax unified\n\
    rsbs        r5,r5,#0\n\
.syntax divided\n\
     mov        r12,r1\n\
     cmp        r2,r5\n\
     beq        LAB_080325f2\n\
     ldr        r0,DAT_08032644\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r0,r2\n\
     ble        LAB_080325f2\n\
     mov        r0,#0x6c\n\
     strh       r0,[r4,#0xa]\n\
     str        r5,[r3,#0x0]\n\
LAB_080325f2:\n\
     asr        r0,r7,#0x10\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x2\n\
     mov        r2,r8\n\
     add        r3,r1,r2\n\
     ldrh       r0,[r3,#0x6]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032650\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r0,DAT_08032648\n\
     ldrh       r5,[r1,#0x2]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,r5,r0\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_0803264c\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080326f6\n\
     ldr        r0,[r3,#0x0]\n\
     mov        r6,#0x2\n\
     ldrsh      r0,[r0,r6]\n\
     cmp        r0,#0xef\n\
     bgt        LAB_080326f6\n\
     ldrh       r0,[r3,#0x8]\n\
     add        r0,#0x1\n\
     strh       r0,[r3,#0x8]\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0xd\n\
     ble        LAB_080326f6\n\
     mov        r0,#0xd\n\
     strh       r0,[r3,#0x8]\n\
     b          LAB_080326f6\n\
.space 1\n\
.space 1\n\
DAT_0803263c:\n\
     .word 0x02010970\n\
DAT_08032640:\n\
     .word 0x087C738C\n\
DAT_08032644:\n\
     .word 0x020108F0\n\
DAT_08032648:\n\
     .word 0x0201091C\n\
DAT_0803264c:\n\
     .word 0x02010A1C\n\
LAB_08032650:\n\
     ldr        r1,[r3,#0x0]\n\
     ldr        r2,DAT_0803267c\n\
     ldr        r4,[r2,#0x0]\n\
     ldrh       r5,[r1,#0x2]\n\
     sub        r0,r5,r4\n\
     strh       r0,[r1,#0x2]\n\
     ldr        r0,DAT_08032680\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r5,DAT_08032684\n\
     add        r6,r0,#0x0\n\
     cmp        r1,#0x9\n\
     bls        LAB_08032688\n\
     ldr        r1,[r5,#0x0]\n\
     mov        r0,#0x1\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_08032688\n\
     ldr        r1,[r3,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x1\n\
     sub        r0,r0,r4\n\
     b          LAB_080326a6\n\
DAT_0803267c:\n\
     .word 0x02010948\n\
DAT_08032680:\n\
     .word 0x020108D0\n\
DAT_08032684:\n\
     .word 0x02010A1C\n\
LAB_08032688:\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0x3\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080326a8\n\
     asr        r1,r7,#0x10\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r0,r8\n\
     ldr        r1,[r0,#0x0]\n\
     ldrh       r0,[r1,#0x2]\n\
     sub        r0,#0x1\n\
     ldrh       r2,[r2,#0x0]\n\
     sub        r0,r0,r2\n\
LAB_080326a6:\n\
     strh       r0,[r1,#0x2]\n\
LAB_080326a8:\n\
     asr        r1,r7,#0x10\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     mov        r1,r8\n\
     add        r2,r0,r1\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x5f\n\
     ldrh       r1,[r1,#0x4]\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x1f\n\
     ble        LAB_080326f6\n\
     ldr        r0,[r6,#0x0]\n\
     cmp        r0,#0x9\n\
     bls        LAB_080326dc\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0x1\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080326dc\n\
     ldrh       r0,[r2,#0x8]\n\
     sub        r0,#0x2\n\
     strh       r0,[r2,#0x8]\n\
     b          LAB_080326f6\n\
LAB_080326dc:\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r1,#0x3\n\
     and        r0,r1\n\
     cmp        r0,#0x0\n\
     bne        LAB_080326f6\n\
     asr        r0,r7,#0x10\n\
     lsl        r1,r0,#0x1\n\
     add        r1,r1,r0\n\
     lsl        r1,r1,#0x2\n\
     add        r1,r8\n\
     ldrh       r0,[r1,#0x8]\n\
     sub        r0,#0x3\n\
     strh       r0,[r1,#0x8]\n\
LAB_080326f6:\n\
     asr        r4,r7,#0x10\n\
     lsl        r5,r4,#0x1\n\
     add        r0,r5,r4\n\
     lsl        r0,r0,#0x2\n\
     mov        r3,r8\n\
     add        r2,r0,r3\n\
     ldr        r1,[r2,#0x0]\n\
     ldrh       r6,[r2,#0xa]\n\
     ldrh       r3,[r2,#0x8]\n\
     sub        r0,r6,r3\n\
     mov        r6,#0x0\n\
     strh       r0,[r1,#0x4]\n\
     ldr        r1,[r2,#0x0]\n\
     mov        r0,#0x2\n\
     ldrsh      r3,[r1,r0]\n\
     mov        r0,#0x20\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r3,r0\n\
     bge        LAB_08032734\n\
     strh       r6,[r2,#0x4]\n\
     add        r0,r1,#0x0\n\
     bl         fun_08003b00\n\
     ldr        r0,DAT_08032730\n\
     add        r0,r5,r0\n\
     mov        r1,#0x1\n\
     strh       r1,[r0,#0x0]\n\
     b          LAB_08032756\n\
.space 1\n\
.space 1\n\
DAT_08032730:\n\
     .word 0x087C73B4\n\
LAB_08032734:\n\
     mov        r1,#0xa\n\
     ldrsh      r0,[r2,r1]\n\
     mov        r1,#0xa\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
     cmp        r0,r1\n\
     beq        LAB_08032756\n\
     mov        r0,#0x90\n\
     lsl        r0,r0,#0x1\n\
     cmp        r3,r0\n\
     ble        LAB_08032756\n\
     strh       r1,[r2,#0xa]\n\
     lsl        r0,r4,#0x2\n\
     add        r0,r12\n\
     ldr        r1,DAT_08032770\n\
     mov        r2,#0x4\n\
     ldrsh      r1,[r1,r2]\n\
     str        r1,[r0,#0x0]\n\
LAB_08032756:\n\
     mov        r3,#0x80\n\
     lsl        r3,r3,#0x9\n\
     add        r0,r7,r3\n\
     lsr        r1,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x9\n\
     bgt        LAB_08032766\n\
     b          LAB_080325b8\n\
LAB_08032766:\n\
     pop        {r3}\n\
     mov        r8,r3\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08032770:\n\
     .word 0x020108F0\n\
    ");
}
__attribute__((naked)) void fun_08032774()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x10\n\
     ldr        r0,DAT_08032814\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032782\n\
     b          LAB_080328a0\n\
LAB_08032782:\n\
     ldr        r0,DAT_08032818\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803278c\n\
     b          LAB_080328a0\n\
LAB_0803278c:\n\
     mov        r2,#0x0\n\
LAB_0803278e:\n\
     ldr        r3,DAT_0803281c\n\
     lsl        r2,r2,#0x10\n\
     asr        r1,r2,#0x10\n\
     lsl        r0,r1,#0x1\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x2\n\
     add        r4,r0,r3\n\
     ldrh       r0,[r4,#0x4]\n\
     add        r6,r2,#0x0\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032890\n\
     mov        r1,#0x0\n\
     mov        r3,#0x1c\n\
     ldr        r0,DAT_08032820\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080327b4\n\
     mov        r3,#0xe\n\
     mov        r1,#0x10\n\
LAB_080327b4:\n\
     mov        r5,#0x8\n\
     ldrh       r0,[r4,#0x6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080327be\n\
     mov        r5,#0xa\n\
LAB_080327be:\n\
     ldr        r0,DAT_08032824\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032890\n\
     ldr        r0,DAT_08032828\n\
     ldr        r0,[r0,#0x0]\n\
     sub        r0,#0x14\n\
     lsl        r0,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     ldr        r2,DAT_0803282c\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     ldrh       r2,[r2,#0x6]\n\
     add        r1,r2,r1\n\
     sub        r1,#0x14\n\
     lsl        r1,r1,#0x10\n\
     asr        r1,r1,#0x10\n\
     ldr        r2,[r4,#0x0]\n\
     mov        r7,#0x2\n\
     ldrsh      r2,[r2,r7]\n\
     str        r2,[sp,#0x0]\n\
     ldr        r2,[r4,#0x0]\n\
     ldrh       r2,[r2,#0x4]\n\
     sub        r2,#0x10\n\
     lsl        r2,r2,#0x10\n\
     asr        r2,r2,#0x10\n\
     str        r2,[sp,#0x4]\n\
     mov        r2,#0x8\n\
     str        r2,[sp,#0x8]\n\
     str        r5,[sp,#0xc]\n\
     mov        r2,#0xa\n\
     bl         fun_080328a8\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032890\n\
     ldrh       r0,[r4,#0x6]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032830\n\
     mov        r0,#0x3b\n\
     bl         fun_080016f0\n\
     b          LAB_08032836\n\
DAT_08032814:\n\
     .word 0x02010950\n\
DAT_08032818:\n\
     .word 0x02010914\n\
DAT_0803281c:\n\
     .word 0x02010970\n\
DAT_08032820:\n\
     .word 0x020108C0\n\
DAT_08032824:\n\
     .word 0x02010928\n\
DAT_08032828:\n\
     .word 0x0201092C\n\
DAT_0803282c:\n\
     .word 0x020108F0\n\
LAB_08032830:\n\
     mov        r0,#0x10\n\
     bl         fun_080016f0\n\
LAB_08032836:\n\
     mov        r0,#0x19\n\
     bl         fun_080016f0\n\
     ldr        r0,DAT_08032870\n\
     mov        r1,#0x0\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08032874\n\
     str        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08032878\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803285a\n\
     ldr        r1,DAT_0803287c\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r1,DAT_08032880\n\
     mov        r0,#0xc8\n\
     str        r0,[r1,#0x0]\n\
LAB_0803285a:\n\
     ldr        r1,DAT_08032884\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08032888\n\
     mov        r0,#0xa\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_0803288c\n\
     mov        r0,#0x5a\n\
     str        r0,[r1,#0x0]\n\
     b          LAB_080328a0\n\
DAT_08032870:\n\
     .word 0x020108E8\n\
DAT_08032874:\n\
     .word 0x020109EC\n\
DAT_08032878:\n\
     .word 0x02010A18\n\
DAT_0803287c:\n\
     .word 0x02010934\n\
DAT_08032880:\n\
     .word 0x020108DC\n\
DAT_08032884:\n\
     .word 0x02010960\n\
DAT_08032888:\n\
     .word 0x0201089C\n\
DAT_0803288c:\n\
     .word 0x02010950\n\
LAB_08032890:\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x9\n\
     add        r0,r6,r1\n\
     lsr        r2,r0,#0x10\n\
     asr        r0,r0,#0x10\n\
     cmp        r0,#0x9\n\
     bgt        LAB_080328a0\n\
     b          LAB_0803278e\n\
LAB_080328a0:\n\
     add        sp,#0x10\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_080328a8()
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
     blt        LAB_08032934\n\
     lsl        r1,r7,#0x10\n\
     lsl        r0,r5,#0x10\n\
     cmp        r1,r0\n\
     bgt        LAB_08032934\n\
     lsl        r1,r4,#0x10\n\
     lsl        r0,r3,#0x10\n\
     cmp        r1,r0\n\
     blt        LAB_08032934\n\
     mov        r4,r12\n\
     lsl        r1,r4,#0x10\n\
     lsl        r0,r6,#0x10\n\
     cmp        r1,r0\n\
     bgt        LAB_08032934\n\
     mov        r0,#0x1\n\
     b          LAB_08032936\n\
LAB_08032934:\n\
     mov        r0,#0x0\n\
LAB_08032936:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_08032944()
{
    asm("\n\
     push       {r4,lr}\n\
     ldr        r1,DAT_0803298c\n\
     ldr        r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032952\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
LAB_08032952:\n\
     ldr        r2,DAT_08032990\n\
     ldr        r0,[r2,#0x0]\n\
     ldr        r3,DAT_08032994\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032978\n\
     ldr        r1,[r3,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08032972\n\
     sub        r0,#0x1\n\
     str        r0,[r2,#0x0]\n\
     mov        r4,#0x80\n\
     lsl        r4,r4,#0x4\n\
     add        r0,r4,#0x0\n\
     ldrh       r4,[r1,#0x12]\n\
     orr        r0,r4\n\
     strh       r0,[r1,#0x12]\n\
LAB_08032972:\n\
     ldr        r0,[r2,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032986\n\
LAB_08032978:\n\
     ldr        r1,[r3,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_08032986\n\
     ldr        r0,DAT_08032998\n\
     ldrh       r2,[r1,#0x12]\n\
     and        r0,r2\n\
     strh       r0,[r1,#0x12]\n\
LAB_08032986:\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803298c:\n\
     .word 0x0201089C\n\
DAT_08032990:\n\
     .word 0x02010950\n\
DAT_08032994:\n\
     .word 0x020108F0\n\
DAT_08032998:\n\
     .word 0x0000F7FF\n\
    ");
}
__attribute__((naked)) void fun_0803299c()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     ldr        r1,PTR_DAT_080329ec\n\
     mov        r0,#0xc0\n\
     lsl        r0,r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080329f0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_080329cc\n\
     ldr        r1,PTR_DAT_080329f4\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_080329cc\n\
     mov        r2,#0x1\n\
     strh       r2,[r1,#0x0]\n\
     ldr        r1,PTR_DAT_080329f8\n\
     mov        r0,#0xcd\n\
     lsl        r0,r0,#0x3\n\
     str        r0,[r1,#0x0]\n\
     ldr        r0,PTR_DAT_080329fc\n\
     strh       r2,[r0,#0x0]\n\
     mov        r0,#0x18\n\
     bl         fun_080016f0\n\
LAB_080329cc:\n\
     ldr        r0,PTR_DAT_08032a00\n\
     ldr        r0,[r0,#0x0]\n\
     cmp        r0,#0x13\n\
     bls        LAB_08032a22\n\
     ldr        r0,PTR_DAT_08032a04\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032a22\n\
     ldr        r3,PTR_DAT_08032a08\n\
     ldr        r2,[r3,#0x0]\n\
     cmp        r2,#0x0\n\
     beq        LAB_08032a0c\n\
     sub        r0,r2,#0x1\n\
     str        r0,[r3,#0x0]\n\
     b          LAB_08032a22\n\
.space 1\n\
.space 1\n\
PTR_DAT_080329ec:\n\
     .word       DAT_020108e8\n\
PTR_DAT_080329f0:\n\
     .word       DAT_020108b4\n\
PTR_DAT_080329f4:\n\
     .word       DAT_02010a18\n\
PTR_DAT_080329f8:\n\
     .word       DAT_020108dc\n\
PTR_DAT_080329fc:\n\
     .word       DAT_02010a04\n\
PTR_DAT_08032a00:\n\
     .word       DAT_020108d0\n\
PTR_DAT_08032a04:\n\
     .word       DAT_02010910\n\
PTR_DAT_08032a08:\n\
     .word       DAT_02010884\n\
LAB_08032a0c:\n\
     ldr        r1,DAT_08032a40\n\
     ldr        r0,DAT_08032a44\n\
     str        r0,[r1,#0x0]\n\
     ldr        r1,DAT_08032a48\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     sub        r0,r2,#0x1\n\
     str        r0,[r3,#0x0]\n\
     mov        r0,#0x18\n\
     bl         fun_080016f0\n\
LAB_08032a22:\n\
     ldr        r1,DAT_08032a4c\n\
     ldrh       r0,[r1,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032ac8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_08032a50\n\
     ldr        r1,[r0,#0x0]\n\
     ldr        r0,DAT_08032a54\n\
     cmp        r1,r0\n\
     bhi        LAB_08032a5c\n\
     ldr        r1,DAT_08032a58\n\
     mov        r0,#0x63\n\
     b          LAB_08032a60\n\
.space 1\n\
.space 1\n\
DAT_08032a40:\n\
     .word 0x020108DC\n\
DAT_08032a44:\n\
     .word 0x0000099C\n\
DAT_08032a48:\n\
     .word 0x02010A04\n\
DAT_08032a4c:\n\
     .word 0x02010880\n\
DAT_08032a50:\n\
     .word 0x02010A1C\n\
DAT_08032a54:\n\
     .word 0x00001C1F\n\
DAT_08032a58:\n\
     .word 0x0200F0FC\n\
LAB_08032a5c:\n\
     ldr        r1,DAT_08032a78\n\
     mov        r0,#0x0\n\
LAB_08032a60:\n\
     str        r0,[r1,#0x0]\n\
     add        r6,r1,#0x0\n\
     ldr        r0,DAT_08032a7c\n\
     ldr        r2,[r0,#0x0]\n\
     cmp        r2,#0x0\n\
     bne        LAB_08032a84\n\
     ldr        r1,DAT_08032a80\n\
     mov        r0,#0xaf\n\
     lsl        r0,r0,#0x2\n\
     str        r0,[r1,#0x0]\n\
     add        r5,r1,#0x0\n\
     b          LAB_08032a9c\n\
DAT_08032a78:\n\
     .word 0x0200F0FC\n\
DAT_08032a7c:\n\
     .word 0x02010A08\n\
DAT_08032a80:\n\
     .word 0x020108CC\n\
LAB_08032a84:\n\
     ldr        r4,PTR_DAT_08032ae0\n\
     ldr        r0,PTR_DAT_08032ae4\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x64\n\
     mul        r0,r1\n\
     add        r1,r2,#0x0\n\
     bl         __udivsi3\n\
     lsl        r1,r0,#0x3\n\
     sub        r1,r1,r0\n\
     str        r1,[r4,#0x0]\n\
     add        r5,r4,#0x0\n\
LAB_08032a9c:\n\
     add        r1,r5,#0x0\n\
     ldr        r0,[r1,#0x0]\n\
     mov        r4,#0xaf\n\
     lsl        r4,r4,#0x2\n\
     cmp        r0,r4\n\
     bls        LAB_08032aaa\n\
     str        r4,[r1,#0x0]\n\
LAB_08032aaa:\n\
     ldr        r3,PTR_DAT_08032ae8\n\
     ldr        r2,[r6,#0x0]\n\
     add        r2,#0xc8\n\
     ldr        r0,PTR_DAT_08032aec\n\
     ldr        r0,[r0,#0x0]\n\
     mov        r1,#0x14\n\
     sub        r1,r1,r0\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r1\n\
     lsl        r0,r0,#0x1\n\
     sub        r2,r2,r0\n\
     add        r2,r2,r4\n\
     ldr        r0,[r5,#0x0]\n\
     sub        r2,r2,r0\n\
     str        r2,[r3,#0x0]\n\
LAB_08032ac8:\n\
     ldr        r0,PTR_DAT_08032af0\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0x88\n\
     lsl        r0,r0,#0x1\n\
     cmp        r1,r0\n\
     bls        LAB_08032ada\n\
     mov        r0,#0x10\n\
     bl         fun_08001070\n\
LAB_08032ada:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
PTR_DAT_08032ae0:\n\
     .word       DAT_020108cc\n\
PTR_DAT_08032ae4:\n\
     .word       DAT_02010960\n\
PTR_DAT_08032ae8:\n\
     .word       DAT_020025fc\n\
PTR_DAT_08032aec:\n\
     .word       DAT_020108d0\n\
PTR_DAT_08032af0:\n\
     .word       DAT_0201092c\n\
    ");
}
__attribute__((naked)) void fun_08032af4()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     ldr        r4,DAT_08032c54\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_08032b0e\n\
     mov        r0,#0x36\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
LAB_08032b0e:\n\
     ldr        r0,DAT_08032c58\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032b24\n\
     ldr        r1,DAT_08032c5c\n\
     ldr        r0,[r1,#0x0]\n\
     sub        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     mov        r1,#0x5\n\
     bl         fun_08002ff0\n\
LAB_08032b24:\n\
     ldr        r1,DAT_08032c60\n\
     ldr        r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     str        r0,[r1,#0x0]\n\
     ldr        r4,DAT_08032c64\n\
     ldr        r6,DAT_08032c68\n\
     ldr        r3,[r6,#0x0]\n\
     asr        r3,r3,#0x8\n\
     mov        r0,#0x0\n\
     mov        r1,#0x0\n\
     add        r2,r4,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r0,DAT_08032c6c\n\
     ldr        r3,[r0,#0x0]\n\
     lsr        r3,r3,#0x8\n\
     mov        r0,#0x0\n\
     mov        r1,#0x1\n\
     add        r2,r4,#0x0\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032c70\n\
     ldr        r4,DAT_08032c74\n\
     mov        r0,#0x4\n\
     ldrsh      r3,[r4,r0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x2\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032c78\n\
     mov        r1,#0x6\n\
     ldrsh      r3,[r4,r1]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x3\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032c7c\n\
     ldr        r0,DAT_08032c80\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x4\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032c84\n\
     ldr        r0,DAT_08032c88\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x5\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032c8c\n\
     ldr        r0,DAT_08032c90\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x6\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032c94\n\
     ldr        r0,DAT_08032c98\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x7\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032c9c\n\
     ldr        r0,DAT_08032ca0\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x8\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032ca4\n\
     ldr        r5,DAT_08032ca8\n\
     ldr        r3,[r5,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x9\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032cac\n\
     ldr        r0,DAT_08032cb0\n\
     ldr        r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xa\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032cb4\n\
     ldr        r4,DAT_08032cb8\n\
     ldr        r3,[r4,#0x0]\n\
     lsr        r0,r3,#0x8\n\
     str        r0,[sp,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xb\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_08032cbc\n\
     ldr        r0,DAT_08032cc0\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0xc\n\
     bl         fun_080032a0\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r1,#0x80\n\
     lsl        r1,r1,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r1,[r5,#0x0]\n\
     add        r0,r0,r1\n\
     str        r0,[r4,#0x0]\n\
     ldr        r0,DAT_08032cc4\n\
     ldr        r4,DAT_08032cc8\n\
     ldr        r2,[r4,#0x0]\n\
     str        r2,[r0,#0x0]\n\
     ldr        r0,[r6,#0x0]\n\
     asr        r0,r0,#0x8\n\
     cmp        r0,#0x0\n\
     bge        LAB_08032c10\n\
     ldr        r1,DAT_08032ccc\n\
     add        r0,r0,r1\n\
LAB_08032c10:\n\
     asr        r1,r0,#0x9\n\
     str        r1,[r4,#0x0]\n\
     add        r0,r2,#0x1\n\
     cmp        r1,r0\n\
     bne        LAB_08032c24\n\
     cmp        r1,#0x14\n\
     beq        LAB_08032c2a\n\
     mov        r0,#0xb\n\
     bl         fun_080016f0\n\
LAB_08032c24:\n\
     ldr        r0,[r4,#0x0]\n\
     cmp        r0,#0x14\n\
     bne        LAB_08032cd8\n\
LAB_08032c2a:\n\
     ldr        r0,DAT_08032cd0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032cd8\n\
     ldr        r4,DAT_08032cd4\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032c44\n\
     mov        r0,#0x3a\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_08032c44:\n\
     bl         fun_08003048\n\
     ldr        r1,DAT_08032c58\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0803299c\n\
     b          LAB_08032d08\n\
DAT_08032c54:\n\
     .word 0x02010888\n\
DAT_08032c58:\n\
     .word 0x02010A14\n\
DAT_08032c5c:\n\
     .word 0x02010954\n\
DAT_08032c60:\n\
     .word 0x02010A1C\n\
DAT_08032c64:\n\
     .word 0x085FF4D4\n\
DAT_08032c68:\n\
     .word 0x02010930\n\
DAT_08032c6c:\n\
     .word 0x02010898\n\
DAT_08032c70:\n\
     .word 0x085FF4E4\n\
DAT_08032c74:\n\
     .word 0x020108F0\n\
DAT_08032c78:\n\
     .word 0x085FF4EC\n\
DAT_08032c7c:\n\
     .word 0x085FF4F4\n\
DAT_08032c80:\n\
     .word 0x020108C4\n\
DAT_08032c84:\n\
     .word 0x085FF508\n\
DAT_08032c88:\n\
     .word 0x020108BC\n\
DAT_08032c8c:\n\
     .word 0x085FF51C\n\
DAT_08032c90:\n\
     .word 0x020109FC\n\
DAT_08032c94:\n\
     .word 0x085FF530\n\
DAT_08032c98:\n\
     .word 0x020108DC\n\
DAT_08032c9c:\n\
     .word 0x085FF544\n\
DAT_08032ca0:\n\
     .word 0x0201088C\n\
DAT_08032ca4:\n\
     .word 0x085FF55C\n\
DAT_08032ca8:\n\
     .word 0x020108E8\n\
DAT_08032cac:\n\
     .word 0x085FF570\n\
DAT_08032cb0:\n\
     .word 0x02010948\n\
DAT_08032cb4:\n\
     .word 0x085FF588\n\
DAT_08032cb8:\n\
     .word 0x020109F4\n\
DAT_08032cbc:\n\
     .word 0x085FF59C\n\
DAT_08032cc0:\n\
     .word 0x020108B4\n\
DAT_08032cc4:\n\
     .word 0x0201096C\n\
DAT_08032cc8:\n\
     .word 0x020108D0\n\
DAT_08032ccc:\n\
     .word 0x000001FF\n\
DAT_08032cd0:\n\
     .word 0x02010910\n\
DAT_08032cd4:\n\
     .word 0x020108D4\n\
LAB_08032cd8:\n\
     ldr        r0,DAT_08032d10\n\
     ldr        r1,[r0,#0x0]\n\
     mov        r0,#0xe1\n\
     lsl        r0,r0,#0x5\n\
     cmp        r1,r0\n\
     bls        LAB_08032d08\n\
     ldr        r0,DAT_08032d14\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032d08\n\
     ldr        r4,DAT_08032d18\n\
     ldrh       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_08032cfe\n\
     mov        r0,#0xa\n\
     bl         fun_080016f0\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
LAB_08032cfe:\n\
     ldr        r1,DAT_08032d1c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     bl         fun_0803299c\n\
LAB_08032d08:\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_08032d10:\n\
     .word 0x02010A1C\n\
DAT_08032d14:\n\
     .word 0x02010910\n\
DAT_08032d18:\n\
     .word 0x020108D4\n\
DAT_08032d1c:\n\
     .word 0x02010A14\n\
    ");
}
__attribute__((naked)) void fun_08032d20()
{
    asm("\n\
    push       {r4,r5,lr}\n\
    mov        r4,#0x0\n\
LAB_08032d24:\n\
    lsl        r0,r4,#0x5\n\
    ldr        r5,DAT_08032d64\n\
    add        r0,r0,r5\n\
    mov        r1,#0x2c\n\
    mul        r1,r4\n\
    ldr        r2,DAT_08032d68\n\
    add        r1,r1,r2\n\
    bl         fun_080004ac\n\
    add        r0,r4,#0x1\n\
    lsl        r0,r0,#0x18\n\
    lsr        r4,r0,#0x18\n\
    cmp        r4,#0x0\n\
    beq        LAB_08032d24\n\
    add        r1,r5,#0x0\n\
    ldr        r0,[r1,#0xc]\n\
    cmp        r0,#0x0\n\
    beq        LAB_08032d50\n\
    lsl        r0,r4,#0x5\n\
    add        r0,r0,r1\n\
    mov        r1,#0x1\n\
    strh       r1,[r0,#0x10]\n\
LAB_08032d50:\n\
    ldr        r0,DAT_08032d6c\n\
    bl         fun_080045f0\n\
    add        r0,r5,#0x0\n\
    mov        r1,#0x1\n\
    bl         fun_0803aa14\n\
    pop        {r4,r5}\n\
    pop        {r0}\n\
    bx         r0\n\
DAT_08032d64:\n\
    .word 0x020108F0\n\
DAT_08032d68:\n\
    .word 0x087C7360\n\
DAT_08032d6c:\n\
    .word 0x0860E5F8\n\
    ");
}
