#include "functions.h"
#include "variables.h"

__attribute__((naked)) s32 fun_0803c010(u8* param_1, u16 param_2, void* param_3)
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r5,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     add        r7,r2,#0x0\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     bl         strlen\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x11\n\
     ldr        r3,DAT_0803c0a0\n\
     ldr        r1,[r7,#0x0]\n\
     ldrh       r1,[r1,#0x4]\n\
     lsl        r2,r1,#0x1\n\
     add        r2,r2,r3\n\
     ldrh       r3,[r2,#0x0]\n\
     add        r1,r3,#0x0\n\
     mul        r1,r0\n\
     mov        r0,#0x78\n\
     sub        r0,r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
     mov        r10,r1\n\
     lsl        r4,r4,#0x10\n\
     asr        r6,r0,#0x10\n\
     asr        r4,r4,#0x10\n\
     mov        r8,r4\n\
     ldrh       r4,[r2,#0x0]\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c08a\n\
     mov        r2,#0x0\n\
     mov        r9,r2\n\
LAB_0803c05a:\n\
     cmp        r0,#0x20\n\
     beq        LAB_0803c07c\n\
     ldr        r0,[r7,#0x0]\n\
     bl         fun_08003998\n\
     mov        r1,#0x66\n\
     strh       r1,[r0,#0xa]\n\
     strh       r6,[r0,#0x2]\n\
     mov        r3,r8\n\
     strh       r3,[r0,#0x4]\n\
     ldr        r1,[r7,#0x4]\n\
     ldrb       r2,[r5,#0x0]\n\
     add        r1,r2,r1\n\
     ldrb       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     mov        r3,r9\n\
     strh       r3,[r0,#0x6]\n\
LAB_0803c07c:\n\
     add        r0,r4,r6\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     add        r5,#0x1\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c05a\n\
LAB_0803c08a:\n\
     mov        r1,r10\n\
     lsl        r0,r1,#0x10\n\
     asr        r0,r0,#0x10\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803c0a0:\n\
     .word 0x08049D60\n\
    ");
}
__attribute__((naked)) void fun_0803c0a4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     add        r5,r0,#0x0\n\
     add        r4,r1,#0x0\n\
     add        r7,r2,#0x0\n\
     lsl        r4,r4,#0x10\n\
     lsr        r4,r4,#0x10\n\
     bl         strlen\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     ldr        r2,DAT_0803c134\n\
     ldr        r1,[r7,#0x0]\n\
     ldrh       r1,[r1,#0x4]\n\
     lsl        r1,r1,#0x1\n\
     add        r1,r1,r2\n\
     ldrh       r2,[r1,#0x0]\n\
     mul        r0,r2\n\
     asr        r0,r0,#0x1\n\
     mov        r1,#0x78\n\
     sub        r1,r1,r0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r0,r1,#0x10\n\
     mov        r10,r0\n\
     lsl        r4,r4,#0x10\n\
     asr        r6,r1,#0x10\n\
     asr        r4,r4,#0x10\n\
     mov        r8,r4\n\
     add        r4,r2,#0x0\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c11e\n\
     mov        r1,#0x0\n\
     mov        r9,r1\n\
LAB_0803c0ee:\n\
     cmp        r0,#0x20\n\
     beq        LAB_0803c110\n\
     ldr        r0,[r7,#0x0]\n\
     bl         fun_08003998\n\
     mov        r1,#0x66\n\
     strh       r1,[r0,#0xa]\n\
     strh       r6,[r0,#0x2]\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x4]\n\
     ldr        r1,[r7,#0x4]\n\
     ldrb       r2,[r5,#0x0]\n\
     add        r1,r2,r1\n\
     ldrb       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x6]\n\
LAB_0803c110:\n\
     add        r0,r4,r6\n\
     lsl        r0,r0,#0x10\n\
     lsr        r6,r0,#0x10\n\
     add        r5,#0x1\n\
     ldrb       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c0ee\n\
LAB_0803c11e:\n\
     mov        r2,r10\n\
     lsl        r0,r2,#0x10\n\
     asr        r0,r0,#0x10\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r1}\n\
     bx         r1\n\
.space 1\n\
.space 1\n\
DAT_0803c134:\n\
     .word 0x08049D60\n\
    ");
}
__attribute__((naked)) void fun_0803c138(u8* param_1, u16 param_2, u16 param_3, s32* param_4)
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     add        r4,r0,#0x0\n\
     add        r6,r3,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r5,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     mov        r8,r2\n\
     ldr        r1,DAT_0803c1a0\n\
     ldr        r0,[r6,#0x0]\n\
     ldrh       r0,[r0,#0x4]\n\
     lsl        r0,r0,#0x1\n\
     add        r0,r0,r1\n\
     ldrh       r7,[r0,#0x0]\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c194\n\
     mov        r1,#0x0\n\
     mov        r9,r1\n\
LAB_0803c164:\n\
     cmp        r0,#0x20\n\
     beq        LAB_0803c186\n\
     ldr        r0,[r6,#0x0]\n\
     bl         fun_08003998\n\
     mov        r1,#0x66\n\
     strh       r1,[r0,#0xa]\n\
     strh       r5,[r0,#0x2]\n\
     mov        r2,r8\n\
     strh       r2,[r0,#0x4]\n\
     ldr        r1,[r6,#0x4]\n\
     ldrb       r2,[r4,#0x0]\n\
     add        r1,r2,r1\n\
     ldrb       r1,[r1,#0x0]\n\
     strh       r1,[r0,#0x0]\n\
     mov        r1,r9\n\
     strh       r1,[r0,#0x6]\n\
LAB_0803c186:\n\
     add        r0,r7,r5\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     add        r4,#0x1\n\
     ldrb       r0,[r4,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c164\n\
LAB_0803c194:\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803c1a0:\n\
     .word 0x08049D60\n\
    ");
}

void fun_0803c1a4()
{
    s16 i;
    s16 count = fun_0800467c();

    i = 0;
    while (i < count)
    {
        struct_08003998* ptr = fun_08004694(i);
        if (ptr->unk0a == 0x66)
        {
            fun_08003b00(ptr);
            count--;
            i--;
        }

        i++;
    }
}

void fun_0803c1ec(u16 param_1, u16 param_2, u16 param_3)
{
    *((u16*)OBJ_PLTT + 1) = param_1;
    *((u16*)OBJ_PLTT + 2) = param_2;
    *((u16*)OBJ_PLTT + 3) = param_3;
}

void fun_0803c204(u16* param_1, u16* param_2, u16* param_3)
{
    *param_1 = *((u16*)OBJ_PLTT + 1);
    *param_2 = *((u16*)OBJ_PLTT + 2);
    *param_3 = *((u16*)OBJ_PLTT + 3);
}

void fun_0803c224()
{
    fun_0800460c(&DAT_086693F4, 0);
}

void fun_0803c238()
{
    fun_0800460c(&DAT_08668DF4, 0);
}

void fun_0803c24c()
{
    fun_0800460c(&DAT_08668DF4, 0);
}

void fun_0803c260()
{
    fun_0800460c(&DAT_086691F4, 0);
}

void fun_0803c274()
{
    fun_0800460c(&DAT_08668FF4, 0);
}

__attribute__((naked)) void fun_0803c288()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     add        r6,r0,#0x0\n\
     ldr        r0,DAT_0803c2a0\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x7\n\
     bhi        switchD_0803c29c_caseD_8\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0803c2a4\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
.space 1\n\
.space 1\n\
DAT_0803c2a0:\n\
     .word 0x020117E0\n\
DAT_0803c2a4:\n\
     .word 0x0803C2A8\n\
switchD_0803c29c_switchdataD_0803c2a8:\n\
     .word       switchD_0803c29c_caseD_0\n\
     .word       switchD_0803c29c_caseD_1\n\
     .word       switchD_0803c29c_caseD_2\n\
     .word       switchD_0803c29c_caseD_3\n\
     .word       switchD_0803c29c_caseD_4\n\
     .word       switchD_0803c29c_caseD_5\n\
     .word       switchD_0803c29c_caseD_6\n\
     .word       switchD_0803c29c_caseD_7\n\
switchD_0803c29c_caseD_5:\n\
     mov        r4,#0x23\n\
     b          switchD_0803c29c_caseD_8\n\
switchD_0803c29c_caseD_3:\n\
     mov        r4,#0x15\n\
     b          switchD_0803c29c_caseD_8\n\
switchD_0803c29c_caseD_4:\n\
     mov        r4,#0x1c\n\
     b          switchD_0803c29c_caseD_8\n\
switchD_0803c29c_caseD_7:\n\
     mov        r4,#0x31\n\
     b          switchD_0803c29c_caseD_8\n\
switchD_0803c29c_caseD_1:\n\
     mov        r4,#0x8\n\
     b          switchD_0803c29c_caseD_8\n\
switchD_0803c29c_caseD_0:\n\
     mov        r4,#0x0\n\
     b          switchD_0803c29c_caseD_8\n\
switchD_0803c29c_caseD_6:\n\
     mov        r4,#0x2a\n\
     b          switchD_0803c29c_caseD_8\n\
switchD_0803c29c_caseD_2:\n\
     mov        r4,#0xe\n\
switchD_0803c29c_caseD_8:\n\
     ldrh       r1,[r6,#0x10]\n\
     add        r0,r4,#0x3\n\
     cmp        r1,r0\n\
     bne        LAB_0803c324\n\
     ldr        r5,DAT_0803c368\n\
     ldr        r0,[r5,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c324\n\
     mov        r0,#0x34\n\
     bl         fun_080016f0\n\
     str        r0,[r5,#0x0]\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x32\n\
     ble        LAB_0803c324\n\
     ldr        r0,[r5,#0x0]\n\
     bl         fun_08001764\n\
     add        r1,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,[r5,#0x0]\n\
     mov        r2,#0xf9\n\
     lsl        r2,r2,#0x18\n\
     add        r1,r1,r2\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_08001754\n\
LAB_0803c324:\n\
     ldrh       r1,[r6,#0x10]\n\
     add        r0,r4,#0x6\n\
     cmp        r1,r0\n\
     bne        LAB_0803c362\n\
     ldr        r4,DAT_0803c36c\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001744\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c362\n\
     mov        r0,#0x35\n\
     bl         fun_080016f0\n\
     str        r0,[r4,#0x0]\n\
     bl         fun_08002c04\n\
     cmp        r0,#0x32\n\
     ble        LAB_0803c362\n\
     ldr        r0,[r4,#0x0]\n\
     bl         fun_08001764\n\
     add        r1,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     ldr        r0,[r4,#0x0]\n\
     mov        r2,#0xf9\n\
     lsl        r2,r2,#0x18\n\
     add        r1,r1,r2\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_08001754\n\
LAB_0803c362:\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803c368:\n\
     .word 0x020117FC\n\
DAT_0803c36c:\n\
     .word 0x020117C4\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803c370()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0xc\n\
     add        r5,r0,#0x0\n\
     mov        r10,r1\n\
     bl         fun_0800e308\n\
     ldr        r0,DAT_0803c4c4\n\
     mov        r8,r0\n\
     ldrh       r1,[r5,#0x4]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x4]\n\
     str        r1,[sp,#0x4]\n\
     mov        r2,sp\n\
     add        r2,#0x2\n\
     ldrh       r0,[r5,#0x6]\n\
     strh       r0,[r2,#0x0]\n\
     ldrh       r0,[r5,#0x6]\n\
     str        r0,[sp,#0x8]\n\
     ldr        r1,DAT_0803c4c8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r0,DAT_0803c4cc\n\
     add        r6,r2,#0x0\n\
     ldrh       r1,[r0,#0x0]\n\
     cmp        r1,#0x4\n\
     bls        LAB_0803c3b2\n\
     mov        r2,#0x0\n\
     strh       r2,[r0,#0x0]\n\
LAB_0803c3b2:\n\
     ldr        r1,[r5,#0x1c]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803c3cc\n\
     ldrb       r2,[r5,#0x18]\n\
     lsl        r0,r2,#0x2\n\
     add        r0,r0,r1\n\
     ldr        r4,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     mov        r1,r10\n\
     mov        r2,sp\n\
     add        r3,r6,#0x0\n\
     bl         _call_via_r4\n\
LAB_0803c3cc:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r5,r1]\n\
     ldrh       r2,[r6,#0x0]\n\
     cmp        r2,r0\n\
     ble        LAB_0803c3e4\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x4]\n\
     cmp        r0,r1\n\
     bne        LAB_0803c3e4\n\
     mov        r2,#0x0\n\
     mov        r8,r2\n\
LAB_0803c3e4:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r5,r1]\n\
     ldrh       r2,[r6,#0x0]\n\
     cmp        r2,r0\n\
     bge        LAB_0803c3fc\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r1,[r5,#0x4]\n\
     cmp        r0,r1\n\
     bne        LAB_0803c3fc\n\
     mov        r2,#0x4\n\
     mov        r8,r2\n\
LAB_0803c3fc:\n\
     mov        r1,sp\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r5,r2]\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r0\n\
     bge        LAB_0803c414\n\
     ldrh       r0,[r6,#0x0]\n\
     ldrh       r1,[r5,#0x6]\n\
     cmp        r0,r1\n\
     bne        LAB_0803c414\n\
     mov        r2,#0x2\n\
     mov        r8,r2\n\
LAB_0803c414:\n\
     mov        r1,sp\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r5,r2]\n\
     ldrh       r1,[r1,#0x0]\n\
     cmp        r1,r0\n\
     ble        LAB_0803c42c\n\
     ldrh       r0,[r6,#0x0]\n\
     ldrh       r1,[r5,#0x6]\n\
     cmp        r0,r1\n\
     bne        LAB_0803c42c\n\
     mov        r2,#0x6\n\
     mov        r8,r2\n\
LAB_0803c42c:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r5,r1]\n\
     ldrh       r2,[r6,#0x0]\n\
     cmp        r2,r0\n\
     ble        LAB_0803c44e\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r1,r0\n\
     ble        LAB_0803c446\n\
     mov        r2,#0x7\n\
     mov        r8,r2\n\
LAB_0803c446:\n\
     cmp        r1,r0\n\
     bge        LAB_0803c44e\n\
     mov        r0,#0x1\n\
     mov        r8,r0\n\
LAB_0803c44e:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r5,r1]\n\
     ldrh       r2,[r6,#0x0]\n\
     cmp        r2,r0\n\
     bge        LAB_0803c470\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r5,r2]\n\
     cmp        r1,r0\n\
     ble        LAB_0803c468\n\
     mov        r2,#0x5\n\
     mov        r8,r2\n\
LAB_0803c468:\n\
     cmp        r1,r0\n\
     bge        LAB_0803c470\n\
     mov        r0,#0x3\n\
     mov        r8,r0\n\
LAB_0803c470:\n\
     ldr        r0,DAT_0803c4d0\n\
     add        r3,r0,#0x0\n\
     ldrh       r1,[r3,#0x0]\n\
     cmp        r1,#0x3\n\
     bls        LAB_0803c51c\n\
     mov        r2,#0x0\n\
     strh       r2,[r3,#0x0]\n\
     ldr        r1,DAT_0803c4d4\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0x6\n\
     bne        LAB_0803c490\n\
     strh       r2,[r1,#0x0]\n\
LAB_0803c490:\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r2,[r5,#0x4]\n\
     cmp        r0,r2\n\
     bne        LAB_0803c51c\n\
     ldrh       r0,[r6,#0x0]\n\
     ldrh       r1,[r5,#0x6]\n\
     cmp        r0,r1\n\
     bne        LAB_0803c51c\n\
     ldrb       r0,[r5,#0x18]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c51c\n\
     ldr        r0,DAT_0803c4d8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c51c\n\
     ldr        r0,DAT_0803c4dc\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x7\n\
     bhi        LAB_0803c51c\n\
     lsl        r0,r0,#0x2\n\
     ldr        r1,DAT_0803c4e0\n\
     add        r0,r0,r1\n\
     ldr        r0,[r0,#0x0]\n\
     mov        pc,r0\n\
.space 1\n\
.space 1\n\
DAT_0803c4c4:\n\
     .word 0x0000FFFF\n\
DAT_0803c4c8:\n\
     .word 0x02011800\n\
DAT_0803c4cc:\n\
     .word 0x020117D0\n\
DAT_0803c4d0:\n\
     .word 0x020117C0\n\
DAT_0803c4d4:\n\
     .word 0x020117C8\n\
DAT_0803c4d8:\n\
     .word 0x020117D8\n\
DAT_0803c4dc:\n\
     .word 0x020117E0\n\
DAT_0803c4e0:\n\
     .word 0x0803C4E4\n\
PTR_LAB_0803c4e4:\n\
     .word       LAB_0803c50a\n\
     .word       LAB_0803c50a\n\
     .word       LAB_0803c516\n\
     .word       LAB_0803c504\n\
     .word       LAB_0803c504\n\
     .word       LAB_0803c504\n\
     .word       LAB_0803c510\n\
     .word       LAB_0803c50a\n\
LAB_0803c504:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x26]\n\
     b          LAB_0803c51a\n\
LAB_0803c50a:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x22]\n\
     b          LAB_0803c51a\n\
LAB_0803c510:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x28]\n\
     b          LAB_0803c51a\n\
LAB_0803c516:\n\
     ldr        r0,[r5,#0x0]\n\
     ldrh       r0,[r0,#0x24]\n\
LAB_0803c51a:\n\
     strh       r0,[r5,#0x10]\n\
LAB_0803c51c:\n\
     ldrh       r0,[r3,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r3,#0x0]\n\
     ldr        r1,DAT_0803c5bc\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,DAT_0803c5c0\n\
     mov        r9,r2\n\
     mov        r7,#0x0\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     ldrh       r1,[r6,#0x0]\n\
     bl         fun_080058bc\n\
     mov        r4,#0x8\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c554\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r5,r1]\n\
     mov        r2,#0x6\n\
     ldrsh      r1,[r5,r2]\n\
     bl         fun_080058bc\n\
     and        r0,r4\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c556\n\
LAB_0803c554:\n\
     mov        r7,#0x1\n\
LAB_0803c556:\n\
     mov        r0,r9\n\
     strh       r7,[r0,#0x0]\n\
     ldr        r0,DAT_0803c5c4\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c56e\n\
     ldr        r0,DAT_0803c5c0\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     lsl        r4,r1,#0x10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c5a0\n\
LAB_0803c56e:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     ldrh       r2,[r6,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803aaf0\n\
     mov        r2,#0x0\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803c58c\n\
     ldr        r0,DAT_0803c5c8\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     lsl        r4,r1,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c5a0\n\
LAB_0803c58c:\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x4]\n\
     ldrh       r0,[r6,#0x0]\n\
     strh       r0,[r5,#0x6]\n\
     mov        r2,r8\n\
     lsl        r4,r2,#0x10\n\
     asr        r0,r4,#0x10\n\
     bl         fun_0800e6e0\n\
LAB_0803c5a0:\n\
     mov        r1,#0x4\n\
     ldrsh      r0,[r5,r1]\n\
     ldr        r2,[sp,#0x4]\n\
     cmp        r2,r0\n\
     bne        LAB_0803c5b4\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r5,r1]\n\
     ldr        r2,[sp,#0x8]\n\
     cmp        r2,r0\n\
     beq        LAB_0803c5cc\n\
LAB_0803c5b4:\n\
     asr        r0,r4,#0x10\n\
     bl         fun_0800e6e0\n\
     b          LAB_0803c5d4\n\
DAT_0803c5bc:\n\
     .word 0x020117D0\n\
DAT_0803c5c0:\n\
     .word 0x020117D4\n\
DAT_0803c5c4:\n\
     .word 0x02011848\n\
DAT_0803c5c8:\n\
     .word 0x02002554\n\
LAB_0803c5cc:\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     bl         fun_0800e6e0\n\
LAB_0803c5d4:\n\
     ldr        r0,DAT_0803c5ec\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c5f8\n\
     ldr        r0,DAT_0803c5f0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c5f8\n\
     ldr        r1,DAT_0803c5f4\n\
     mov        r0,#0x1\n\
     b          LAB_0803c5fc\n\
.space 1\n\
.space 1\n\
DAT_0803c5ec:\n\
     .word 0x02011848\n\
DAT_0803c5f0:\n\
     .word 0x020117D4\n\
DAT_0803c5f4:\n\
     .word 0x02011804\n\
LAB_0803c5f8:\n\
     ldr        r1,DAT_0803c6d8\n\
     mov        r0,#0x0\n\
LAB_0803c5fc:\n\
     strh       r0,[r1,#0x0]\n\
     ldrb       r0,[r5,#0x18]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c612\n\
     bl         fun_080020a4\n\
     ldr        r1,DAT_0803c6dc\n\
     add        r0,r0,r1\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803c61a\n\
LAB_0803c612:\n\
     ldrh       r0,[r5,#0x4]\n\
     ldrh       r1,[r5,#0x6]\n\
     bl         fun_0803a140\n\
LAB_0803c61a:\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0803c6e0\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c638\n\
     ldr        r0,[r5,#0x1c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c638\n\
     asr        r0,r4,#0x10\n\
     ldr        r1,DAT_0803c6e4\n\
     ldrb       r1,[r1,#0x0]\n\
     bl         fun_0800de48\n\
LAB_0803c638:\n\
     bl         is_a_pressed\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c648\n\
     bl         is_b_pressed\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c64c\n\
LAB_0803c648:\n\
     bl         fun_0803c894\n\
LAB_0803c64c:\n\
     asr        r4,r4,#0x10\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r4,r0\n\
     beq        LAB_0803c688\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803c288\n\
     bl         fun_0803c894\n\
     ldr        r0,DAT_0803c6e4\n\
     mov        r1,r8\n\
     strb       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0803c6e0\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c688\n\
     lsl        r0,r4,#0x3\n\
     sub        r0,r0,r4\n\
     ldr        r1,DAT_0803c6e8\n\
     ldrh       r1,[r1,#0x0]\n\
     add        r0,r1,r0\n\
     mov        r1,r10\n\
     ldrh       r1,[r1,#0x10]\n\
     add        r0,r1,r0\n\
     add        r0,#0x1\n\
     strh       r0,[r5,#0x10]\n\
LAB_0803c688:\n\
     ldrb       r0,[r5,#0x18]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c6a6\n\
     bl         fun_080020a4\n\
     ldr        r2,DAT_0803c6e0\n\
     add        r0,r0,r2\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c6a6\n\
     ldr        r0,[r5,#0x1c]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c6a6\n\
     bl         fun_0803c7b8\n\
LAB_0803c6a6:\n\
     ldr        r2,DAT_0803c6ec\n\
     ldr        r4,DAT_0803c6f0\n\
     ldrh       r3,[r4,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x4\n\
     bl         fun_080032a0\n\
     ldr        r2,DAT_0803c6f4\n\
     ldr        r0,DAT_0803c6f8\n\
     ldrh       r3,[r0,#0x0]\n\
     mov        r0,#0x0\n\
     mov        r1,#0x5\n\
     bl         fun_080032a0\n\
     mov        r0,#0x0\n\
     strh       r0,[r4,#0x0]\n\
     add        sp,#0xc\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803c6d8:\n\
     .word 0x02011804\n\
DAT_0803c6dc:\n\
     .word 0x00000DD8\n\
DAT_0803c6e0:\n\
     .word 0x00000DDA\n\
DAT_0803c6e4:\n\
     .word 0x020117E0\n\
DAT_0803c6e8:\n\
     .word 0x020117C8\n\
DAT_0803c6ec:\n\
     .word 0x086695F4\n\
DAT_0803c6f0:\n\
     .word 0x02011848\n\
DAT_0803c6f4:\n\
     .word 0x0866960C\n\
DAT_0803c6f8:\n\
     .word 0x020117D4\n\
    ");
}
__attribute__((naked)) void fun_0803c6fc()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r5,DAT_0803c728\n\
     ldrh       r1,[r5,#0x0]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803c738\n\
     ldr        r1,DAT_0803c72c\n\
     ldr        r0,DAT_0803c730\n\
     str        r0,[r1,#0xc]\n\
     ldr        r4,DAT_0803c734\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c718\n\
     bl         fun_08003b00\n\
LAB_0803c718:\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0xc]\n\
     ldr        r1,[r4,#0x0]\n\
     ldrh       r1,[r1,#0x26]\n\
     strh       r1,[r4,#0x10]\n\
     strh       r0,[r5,#0x0]\n\
     b          LAB_0803c7a0\n\
.space 1\n\
.space 1\n\
DAT_0803c728:\n\
     .word 0x020117D8\n\
DAT_0803c72c:\n\
     .word 0x02011810\n\
DAT_0803c730:\n\
     .word 0x084492B8\n\
DAT_0803c734:\n\
     .word 0x020006A0\n\
LAB_0803c738:\n\
     ldr        r0,DAT_0803c75c\n\
     strh       r1,[r0,#0x0]\n\
     mov        r0,#0x64\n\
     bl         fun_08002c04\n\
     mov        r1,#0x3\n\
     bl         __modsi3\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803c774\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0803c760\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c766\n\
     b          LAB_0803c78a\n\
.space 1\n\
.space 1\n\
DAT_0803c75c:\n\
     .word 0x020117CC\n\
LAB_0803c760:\n\
     cmp        r0,#0x2\n\
     beq        LAB_0803c784\n\
     b          LAB_0803c78a\n\
LAB_0803c766:\n\
     ldr        r1,DAT_0803c76c\n\
     ldr        r0,DAT_0803c770\n\
     b          LAB_0803c788\n\
DAT_0803c76c:\n\
     .word 0x02011810\n\
DAT_0803c770:\n\
     .word 0x084490F8\n\
LAB_0803c774:\n\
     ldr        r1,DAT_0803c77c\n\
     ldr        r0,DAT_0803c780\n\
     b          LAB_0803c788\n\
.space 1\n\
.space 1\n\
DAT_0803c77c:\n\
     .word 0x02011810\n\
DAT_0803c780:\n\
     .word 0x084490D8\n\
LAB_0803c784:\n\
     ldr        r1,DAT_0803c7a8\n\
     ldr        r0,DAT_0803c7ac\n\
LAB_0803c788:\n\
     str        r0,[r1,#0xc]\n\
LAB_0803c78a:\n\
     ldr        r4,DAT_0803c7b0\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c796\n\
     bl         fun_08003b00\n\
LAB_0803c796:\n\
     mov        r0,#0x0\n\
     str        r0,[r4,#0xc]\n\
     ldr        r1,DAT_0803c7b4\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
LAB_0803c7a0:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803c7a8:\n\
     .word 0x02011810\n\
DAT_0803c7ac:\n\
     .word 0x084490E8\n\
DAT_0803c7b0:\n\
     .word 0x020006A0\n\
DAT_0803c7b4:\n\
     .word 0x020117D8\n\
    ");
}
__attribute__((naked)) void fun_0803c7b8()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     ldr        r0,DAT_0803c7f4\n\
     ldrh       r1,[r0,#0x0]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803c7e4\n\
     ldr        r0,DAT_0803c7f8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x1\n\
     bne        LAB_0803c7e4\n\
     ldr        r4,DAT_0803c7fc\n\
     ldr        r1,[r4,#0xc]\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803c7d8\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x8]\n\
LAB_0803c7d8:\n\
     ldrh       r0,[r4,#0x10]\n\
     add        r0,#0x1\n\
     mov        r1,#0x6\n\
     bl         __modsi3\n\
     strh       r0,[r4,#0x10]\n\
LAB_0803c7e4:\n\
     ldr        r2,DAT_0803c800\n\
     ldrh       r1,[r2,#0x0]\n\
     ldr        r0,DAT_0803c804\n\
     cmp        r1,r0\n\
     bhi        LAB_0803c808\n\
     add        r0,r1,#0x1\n\
     strh       r0,[r2,#0x0]\n\
     b          LAB_0803c826\n\
DAT_0803c7f4:\n\
     .word 0x020117D8\n\
DAT_0803c7f8:\n\
     .word 0x020117C0\n\
DAT_0803c7fc:\n\
     .word 0x020006A0\n\
DAT_0803c800:\n\
     .word 0x020117DC\n\
DAT_0803c804:\n\
     .word 0x0000018F\n\
LAB_0803c808:\n\
     ldrh       r0,[r5,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803c812\n\
     bl         fun_0803c6fc\n\
LAB_0803c812:\n\
     ldr        r1,DAT_0803c82c\n\
     ldrh       r0,[r1,#0x0]\n\
     add        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     cmp        r0,#0xf0\n\
     bne        LAB_0803c826\n\
     bl         fun_0803c894\n\
LAB_0803c826:\n\
     pop        {r4,r5}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803c82c:\n\
     .word 0x020117CC\n\
    ");
}
__attribute__((naked)) void fun_0803c830()
{
    asm("\n\
     push       {r4,lr}\n\
     add        r3,r0,#0x0\n\
     ldr        r2,DAT_0803c874\n\
     str        r1,[r2,#0x0]\n\
     ldr        r1,DAT_0803c878\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0803c87c\n\
     str        r0,[r2,#0x8]\n\
     ldr        r0,[r2,#0x8]\n\
     str        r1,[r3,#0x0]\n\
     ldr        r0,DAT_0803c880\n\
     str        r0,[r1,#0xc]\n\
     mov        r4,#0x0\n\
     mov        r0,#0x1c\n\
     strh       r0,[r1,#0x26]\n\
     strh       r4,[r1,#0x22]\n\
     mov        r0,#0x2a\n\
     strh       r0,[r1,#0x28]\n\
     mov        r0,#0xe\n\
     strh       r0,[r1,#0x24]\n\
     ldr        r0,DAT_0803c884\n\
     str        r3,[r0,#0x0]\n\
     str        r1,[r0,#0x4]\n\
     ldr        r1,DAT_0803c888\n\
     str        r1,[r0,#0x8]\n\
     ldr        r1,DAT_0803c88c\n\
     strh       r4,[r1,#0x0]\n\
     bl         fun_0803ab8c\n\
     ldr        r0,DAT_0803c890\n\
     strh       r4,[r0,#0x0]\n\
     pop        {r4}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803c874:\n\
     .word 0x040000D4\n\
DAT_0803c878:\n\
     .word 0x02011810\n\
DAT_0803c87c:\n\
     .word 0x80000016\n\
DAT_0803c880:\n\
     .word 0x084492B8\n\
DAT_0803c884:\n\
     .word 0x020117F0\n\
DAT_0803c888:\n\
     .word 0x0803C371\n\
DAT_0803c88c:\n\
     .word 0x020117C8\n\
DAT_0803c890:\n\
     .word 0x020117C0\n\
    ");
}

void fun_0803c894()
{
    if (DAT_020117d8 != 0)
    {
        fun_0803c6fc();
    }

    DAT_020117dc = 0;
}

// unused
__attribute__((naked)) void fun_0803c8b4()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r9\n\
     mov        r6,r8\n\
     push       {r6,r7}\n\
     sub        sp,#0x4\n\
     add        r4,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     ldrh       r1,[r4,#0x4]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r4,#0x6]\n\
     mov        r1,sp\n\
     add        r1,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x1c]\n\
     mov        r8,r1\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803c8f0\n\
     ldrb       r1,[r4,#0x18]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803c8f0\n\
     add        r0,r4,#0x0\n\
     add        r1,r6,#0x0\n\
     mov        r2,sp\n\
     mov        r3,r8\n\
     bl         _call_via_r5\n\
LAB_0803c8f0:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r3,r8\n\
     ldrh       r2,[r3,#0x0]\n\
     mov        r3,#0x4\n\
     ldrsh      r0,[r4,r3]\n\
     cmp        r1,r0\n\
     bge        LAB_0803c904\n\
     mov        r1,#0x1\n\
     b          LAB_0803c924\n\
LAB_0803c904:\n\
     cmp        r1,r0\n\
     ble        LAB_0803c90c\n\
     mov        r1,#0x3\n\
     b          LAB_0803c924\n\
LAB_0803c90c:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r4,r1]\n\
     cmp        r2,r0\n\
     bge        LAB_0803c918\n\
     mov        r1,#0x2\n\
     b          LAB_0803c924\n\
LAB_0803c918:\n\
     cmp        r2,r0\n\
     ble        LAB_0803c920\n\
     mov        r1,#0x0\n\
     b          LAB_0803c924\n\
LAB_0803c920:\n\
     mov        r1,#0x1\n\
.syntax unified\n\
    rsbs        r1,r1,#0\n\
.syntax divided\n\
LAB_0803c924:\n\
     ldr        r0,DAT_0803c9c4\n\
     strb       r1,[r0,#0x0]\n\
     ldrh       r1,[r4,#0x10]\n\
     mov        r9,r0\n\
     ldrh       r3,[r6,#0x22]\n\
     cmp        r1,r3\n\
     bcc        LAB_0803c93c\n\
     ldrh       r2,[r6,#0x22]\n\
     add        r0,r2,#0x5\n\
     cmp        r1,r0\n\
     bge        LAB_0803c93c\n\
     add        r7,r2,#0x0\n\
LAB_0803c93c:\n\
     ldrh       r0,[r6,#0x24]\n\
     mov        r12,r0\n\
     cmp        r1,r12\n\
     bcc        LAB_0803c94e\n\
     ldrh       r2,[r6,#0x24]\n\
     add        r0,r2,#0x5\n\
     cmp        r1,r0\n\
     bge        LAB_0803c94e\n\
     add        r7,r2,#0x0\n\
LAB_0803c94e:\n\
     ldrh       r0,[r6,#0x26]\n\
     add        r5,r0,#0x0\n\
     cmp        r1,r5\n\
     bcc        LAB_0803c960\n\
     ldrh       r2,[r6,#0x26]\n\
     add        r0,r2,#0x5\n\
     cmp        r1,r0\n\
     bge        LAB_0803c960\n\
     add        r7,r2,#0x0\n\
LAB_0803c960:\n\
     ldrh       r0,[r6,#0x28]\n\
     add        r3,r0,#0x0\n\
     cmp        r1,r3\n\
     bcc        LAB_0803c972\n\
     ldrh       r2,[r6,#0x28]\n\
     add        r0,r2,#0x5\n\
     cmp        r1,r0\n\
     bge        LAB_0803c972\n\
     add        r7,r2,#0x0\n\
LAB_0803c972:\n\
     sub        r0,r1,#0x1\n\
     sub        r0,r0,r7\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     ldr        r0,DAT_0803c9c8\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x4\n\
     bls        LAB_0803c98e\n\
     add        r0,r2,#0x1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     cmp        r2,#0x4\n\
     bne        LAB_0803c98e\n\
     mov        r2,#0x0\n\
LAB_0803c98e:\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     mov        r1,r8\n\
     ldrh       r0,[r1,#0x0]\n\
     strh       r0,[r4,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c9ec\n\
     mov        r0,r9\n\
     mov        r1,#0x0\n\
     ldrsb      r1,[r0,r1]\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_0803c9ec\n\
     mov        r1,r9\n\
     mov        r0,#0x0\n\
     ldrsb      r0,[r1,r0]\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803c9dc\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0803c9cc\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803c9d6\n\
     b          LAB_0803c9ec\n\
.space 1\n\
.space 1\n\
DAT_0803c9c4:\n\
     .word 0x02011844\n\
DAT_0803c9c8:\n\
     .word 0x020117D0\n\
LAB_0803c9cc:\n\
     cmp        r0,#0x2\n\
     beq        LAB_0803c9e2\n\
     cmp        r0,#0x3\n\
     beq        LAB_0803c9e6\n\
     b          LAB_0803c9ec\n\
LAB_0803c9d6:\n\
     ldrh       r0,[r6,#0x22]\n\
     add        r0,#0x1\n\
     b          LAB_0803c9e8\n\
LAB_0803c9dc:\n\
     mov        r0,r12\n\
     add        r0,#0x1\n\
     b          LAB_0803c9e8\n\
LAB_0803c9e2:\n\
     add        r0,r5,#0x1\n\
     b          LAB_0803c9e8\n\
LAB_0803c9e6:\n\
     add        r0,r3,#0x1\n\
LAB_0803c9e8:\n\
     add        r0,r2,r0\n\
     strh       r0,[r4,#0x10]\n\
LAB_0803c9ec:\n\
     add        sp,#0x4\n\
     pop        {r3,r4}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}

void fun_0803c9fc(struct_020006a0* param_1, struct_0877bde8* param_2, struct_0200d430* param_3)
{
    param_3->unk00 = param_1;
    param_3->unk04 = param_2;
    param_3->unk08 = fun_0803c8b4;
    fun_0803ab8c(param_3);
    DAT_020117d0 = 0;
}

void fun_0803ca20()
{
}

__attribute__((naked)) void fun_0803ca24()
{
    asm("\n\
     push       {r4,r5,lr}\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r4,r2,#0x0\n\
     mov        r5,#0x4\n\
     ldrsh      r3,[r0,r5]\n\
     cmp        r1,r3\n\
     bge        LAB_0803ca3c\n\
     mov        r0,#0x1\n\
     b          LAB_0803ca5c\n\
LAB_0803ca3c:\n\
     cmp        r1,r3\n\
     ble        LAB_0803ca44\n\
     mov        r0,#0x3\n\
     b          LAB_0803ca5c\n\
LAB_0803ca44:\n\
     mov        r1,#0x6\n\
     ldrsh      r0,[r0,r1]\n\
     cmp        r2,r0\n\
     bge        LAB_0803ca50\n\
     mov        r0,#0x2\n\
     b          LAB_0803ca5c\n\
LAB_0803ca50:\n\
     cmp        r4,r0\n\
     bgt        LAB_0803ca5a\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     b          LAB_0803ca5c\n\
LAB_0803ca5a:\n\
     mov        r0,#0x0\n\
LAB_0803ca5c:\n\
     pop        {r4,r5}\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}
__attribute__((naked)) void fun_0803ca64()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     mov        r7,r10\n\
     mov        r6,r9\n\
     mov        r5,r8\n\
     push       {r5,r6,r7}\n\
     sub        sp,#0x8\n\
     add        r5,r0,#0x0\n\
     mov        r8,r1\n\
     mov        r0,#0x0\n\
     mov        r10,r0\n\
     ldrh       r1,[r5,#0x4]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r5,#0x6]\n\
     mov        r1,sp\n\
     add        r1,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r5,#0x1c]\n\
     mov        r9,r1\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803caa6\n\
     ldrb       r1,[r5,#0x18]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803caa6\n\
     add        r0,r5,#0x0\n\
     mov        r1,r8\n\
     mov        r2,sp\n\
     mov        r3,r9\n\
     bl         _call_via_r4\n\
LAB_0803caa6:\n\
     ldr        r0,DAT_0803cb34\n\
     cmp        r5,r0\n\
     beq        LAB_0803cae4\n\
     sub        r0,#0x20\n\
     cmp        r5,r0\n\
     beq        LAB_0803cae4\n\
     add        r0,r5,#0x0\n\
     mov        r1,sp\n\
     mov        r2,r9\n\
     bl         fun_0800f664\n\
     lsl        r0,r0,#0x10\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803cae4\n\
     mov        r1,sp\n\
     ldrh       r0,[r5,#0x4]\n\
     strh       r0,[r1,#0x0]\n\
     ldrh       r0,[r5,#0x6]\n\
     mov        r2,r9\n\
     strh       r0,[r2,#0x0]\n\
     bl         is_a_pressed\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803cae4\n\
     ldrb       r3,[r5,#0x18]\n\
     cmp        r3,#0x6\n\
     beq        LAB_0803cae4\n\
     bl         fun_0800ddc8\n\
     mov        r0,#0x3\n\
     strb       r0,[r5,#0x18]\n\
LAB_0803cae4:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r0,r9\n\
     ldrh       r2,[r0,#0x0]\n\
     add        r0,r5,#0x0\n\
     bl         fun_0803ca24\n\
     lsl        r0,r0,#0x18\n\
     lsr        r0,r0,#0x18\n\
     str        r0,[sp,#0x4]\n\
     ldr        r0,[r5,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803cb00\n\
     b          LAB_0803cc62\n\
LAB_0803cb00:\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x26]\n\
     cmp        r0,r1\n\
     bne        LAB_0803cb5a\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     sub        r1,#0x28\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     mov        r0,sp\n\
     mov        r3,r9\n\
     ldrh       r6,[r3,#0x0]\n\
     ldrh       r7,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     sub        r0,#0x20\n\
     b          LAB_0803cb4e\n\
DAT_0803cb34:\n\
     .word 0x02001A20\n\
LAB_0803cb38:\n\
     add        r0,r7,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803cb4a\n\
     b          LAB_0803cd08\n\
LAB_0803cb4a:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8\n\
LAB_0803cb4e:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     cmp        r4,r0\n\
     blt        LAB_0803cb38\n\
LAB_0803cb5a:\n\
     ldr        r0,[r5,#0xc]\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x22]\n\
     cmp        r0,r1\n\
     bne        LAB_0803cbb2\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     add        r1,#0x28\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     mov        r0,sp\n\
     mov        r3,r9\n\
     ldrh       r6,[r3,#0x0]\n\
     ldrh       r7,[r0,#0x0]\n\
     add        r0,r6,#0x0\n\
     sub        r0,#0x20\n\
     b          LAB_0803cba6\n\
LAB_0803cb90:\n\
     add        r0,r7,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803cba2\n\
     b          LAB_0803ccfc\n\
LAB_0803cba2:\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8\n\
LAB_0803cba6:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     cmp        r4,r0\n\
     blt        LAB_0803cb90\n\
LAB_0803cbb2:\n\
     ldr        r0,[r5,#0xc]\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x28]\n\
     cmp        r0,r1\n\
     bne        LAB_0803cc0a\n\
     mov        r0,sp\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     add        r0,#0x28\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     mov        r0,sp\n\
     ldrh       r4,[r0,#0x0]\n\
     add        r6,r4,#0x0\n\
     mov        r3,r9\n\
     ldrh       r7,[r3,#0x0]\n\
     add        r0,r4,#0x0\n\
     sub        r0,#0x20\n\
     b          LAB_0803cbfe\n\
LAB_0803cbea:\n\
     add        r0,r4,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803ccf0\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8\n\
LAB_0803cbfe:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     cmp        r4,r0\n\
     blt        LAB_0803cbea\n\
LAB_0803cc0a:\n\
     ldr        r0,[r5,#0xc]\n\
     ldrh       r0,[r0,#0x0]\n\
     mov        r1,r8\n\
     ldrh       r1,[r1,#0x24]\n\
     cmp        r0,r1\n\
     bne        LAB_0803cc62\n\
     mov        r0,sp\n\
     mov        r2,r9\n\
     ldrh       r1,[r2,#0x0]\n\
     ldrh       r0,[r0,#0x0]\n\
     sub        r0,#0x28\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     mov        r10,r0\n\
     mov        r0,sp\n\
     ldrh       r4,[r0,#0x0]\n\
     add        r6,r4,#0x0\n\
     mov        r3,r9\n\
     ldrh       r7,[r3,#0x0]\n\
     add        r0,r4,#0x0\n\
     sub        r0,#0x20\n\
     b          LAB_0803cc56\n\
LAB_0803cc42:\n\
     add        r0,r4,#0x0\n\
     add        r1,r7,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r1,r0\n\
     cmp        r1,#0x0\n\
     bne        LAB_0803cce4\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8\n\
LAB_0803cc56:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     add        r0,r6,#0x0\n\
     add        r0,#0x20\n\
     cmp        r4,r0\n\
     blt        LAB_0803cc42\n\
LAB_0803cc62:\n\
     ldr        r4,DAT_0803ccd8\n\
     ldr        r1,DAT_0803ccdc\n\
     mov        r2,#0x4\n\
     ldrsh      r0,[r1,r2]\n\
     mov        r3,#0x6\n\
     ldrsh      r1,[r1,r3]\n\
     bl         fun_080058bc\n\
     add        r1,r0,#0x0\n\
     mov        r0,#0x8\n\
     and        r1,r0\n\
     strh       r1,[r4,#0x0]\n\
     ldr        r0,DAT_0803cce0\n\
     ldrh       r0,[r0,#0x0]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803cc98\n\
     ldr        r2,[r5,#0xc]\n\
     lsl        r0,r1,#0x10\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803cc8e\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803cc98\n\
LAB_0803cc8e:\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803cc98\n\
     mov        r0,r10\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803ccb6\n\
LAB_0803cc98:\n\
     ldr        r1,DAT_0803ccdc\n\
     ldr        r0,[r1,#0xc]\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803cca8\n\
     ldr        r0,[r1,#0x8]\n\
     ldr        r2,[r5,#0xc]\n\
     cmp        r0,#0x2\n\
     beq        LAB_0803ccb6\n\
LAB_0803cca8:\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x4]\n\
     mov        r1,r9\n\
     ldrh       r0,[r1,#0x0]\n\
     strh       r0,[r5,#0x6]\n\
     ldr        r2,[r5,#0xc]\n\
LAB_0803ccb6:\n\
     cmp        r2,#0x0\n\
     bne        LAB_0803ccbc\n\
     b          LAB_0803cdc0\n\
LAB_0803ccbc:\n\
     ldr        r3,[sp,#0x4]\n\
     lsl        r0,r3,#0x18\n\
     asr        r1,r0,#0x18\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_0803cd68\n\
     cmp        r1,#0x1\n\
     beq        LAB_0803cd3c\n\
     cmp        r1,#0x1\n\
     bgt        LAB_0803cd14\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803cd1e\n\
     b          LAB_0803cd68\n\
DAT_0803ccd8:\n\
     .word 0x020117D4\n\
DAT_0803ccdc:\n\
     .word 0x020006A0\n\
DAT_0803cce0:\n\
     .word 0x02011804\n\
LAB_0803cce4:\n\
     ldr        r1,DAT_0803ccec\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803cc62\n\
DAT_0803ccec:\n\
     .word 0x02011848\n\
LAB_0803ccf0:\n\
     ldr        r1,DAT_0803ccf8\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803cc0a\n\
DAT_0803ccf8:\n\
     .word 0x02011848\n\
LAB_0803ccfc:\n\
     ldr        r1,DAT_0803cd04\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803cbb2\n\
DAT_0803cd04:\n\
     .word 0x02011848\n\
LAB_0803cd08:\n\
     ldr        r1,DAT_0803cd10\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803cb5a\n\
DAT_0803cd10:\n\
     .word 0x02011848\n\
LAB_0803cd14:\n\
     cmp        r1,#0x2\n\
     beq        LAB_0803cd42\n\
     cmp        r1,#0x3\n\
     beq        LAB_0803cd58\n\
     b          LAB_0803cd68\n\
LAB_0803cd1e:\n\
     mov        r1,r8\n\
     ldrh       r0,[r1,#0x22]\n\
     strh       r0,[r5,#0x10]\n\
     ldr        r0,DAT_0803cd38\n\
     ldrh       r3,[r5,#0x12]\n\
     and        r0,r3\n\
     mov        r1,#0x1\n\
     orr        r0,r1\n\
     strh       r0,[r5,#0x12]\n\
     mov        r0,#0x3\n\
     strb       r0,[r5,#0x14]\n\
     b          LAB_0803cd68\n\
.space 1\n\
.space 1\n\
DAT_0803cd38:\n\
     .word 0x0000FFFE\n\
LAB_0803cd3c:\n\
     mov        r1,r8\n\
     ldrh       r0,[r1,#0x24]\n\
     b          LAB_0803cd46\n\
LAB_0803cd42:\n\
     mov        r1,r8\n\
     ldrh       r0,[r1,#0x26]\n\
LAB_0803cd46:\n\
     strh       r0,[r5,#0x10]\n\
     ldr        r0,DAT_0803cd54\n\
     ldrh       r3,[r5,#0x12]\n\
     and        r0,r3\n\
     strh       r0,[r5,#0x12]\n\
     b          LAB_0803cd68\n\
.space 1\n\
.space 1\n\
DAT_0803cd54:\n\
     .word 0x0000FFFE\n\
LAB_0803cd58:\n\
     mov        r3,r8\n\
     ldrh       r0,[r3,#0x28]\n\
     strh       r0,[r5,#0x10]\n\
     mov        r0,#0x1\n\
     ldrh       r3,[r5,#0x12]\n\
     orr        r0,r3\n\
     strh       r0,[r5,#0x12]\n\
     strb       r1,[r5,#0x14]\n\
LAB_0803cd68:\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803cdc0\n\
     ldrh       r1,[r2,#0x0]\n\
     mov        r0,r8\n\
     ldrh       r0,[r0,#0x22]\n\
     cmp        r1,r0\n\
     bne        LAB_0803cd80\n\
     ldr        r0,DAT_0803cdd0\n\
     strh       r0,[r2,#0xc]\n\
     ldr        r1,[r5,#0xc]\n\
     add        r0,#0x11\n\
     strh       r0,[r1,#0xe]\n\
LAB_0803cd80:\n\
     ldr        r1,[r5,#0xc]\n\
     ldrh       r3,[r1,#0x0]\n\
     mov        r2,r8\n\
     ldrh       r2,[r2,#0x26]\n\
     cmp        r3,r2\n\
     bne        LAB_0803cd96\n\
     ldr        r0,DAT_0803cdd4\n\
     strh       r0,[r1,#0xc]\n\
     ldr        r1,[r5,#0xc]\n\
     sub        r0,#0x18\n\
     strh       r0,[r1,#0xe]\n\
LAB_0803cd96:\n\
     ldr        r0,[r5,#0xc]\n\
     ldrh       r1,[r0,#0x0]\n\
     mov        r3,r8\n\
     ldrh       r3,[r3,#0x28]\n\
     cmp        r1,r3\n\
     bne        LAB_0803cdaa\n\
     ldr        r1,DAT_0803cdd8\n\
     strh       r1,[r0,#0xc]\n\
     ldr        r0,[r5,#0xc]\n\
     strh       r1,[r0,#0xe]\n\
LAB_0803cdaa:\n\
     ldr        r1,[r5,#0xc]\n\
     ldrh       r2,[r1,#0x0]\n\
     mov        r0,r8\n\
     ldrh       r0,[r0,#0x24]\n\
     cmp        r2,r0\n\
     bne        LAB_0803cdc0\n\
     ldr        r0,DAT_0803cdd8\n\
     strh       r0,[r1,#0xc]\n\
     ldr        r1,[r5,#0xc]\n\
     sub        r0,#0x1e\n\
     strh       r0,[r1,#0xe]\n\
LAB_0803cdc0:\n\
     add        sp,#0x8\n\
     pop        {r3,r4,r5}\n\
     mov        r8,r3\n\
     mov        r9,r4\n\
     mov        r10,r5\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803cdd0:\n\
     .word 0x0000FFCF\n\
DAT_0803cdd4:\n\
     .word 0x0000FFF8\n\
DAT_0803cdd8:\n\
     .word 0x0000FFE0\n\
    ");
}
__attribute__((naked)) void fun_0803cddc()
{
    asm("\n\
     push       {lr}\n\
     str        r0,[r2,#0x0]\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,PTR_fun_0803ca64_0803cdf8\n\
     str        r0,[r2,#0x8]\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803ab8c\n\
     ldr        r1,DAT_0803cdfc\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
PTR_fun_0803ca64_0803cdf8:\n\
     .word       fun_0803ca64\n\
DAT_0803cdfc:\n\
     .word 0x020117D0\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803ce00()
{
    asm("\n\
     push       {lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r3,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsr        r2,r2,#0x10\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803ce38\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0803ce1e\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ce2e\n\
     b          LAB_0803ce46\n\
LAB_0803ce1e:\n\
     cmp        r3,#0x2\n\
     beq        LAB_0803ce28\n\
     cmp        r3,#0x3\n\
     beq        LAB_0803ce3e\n\
     b          LAB_0803ce46\n\
LAB_0803ce28:\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x28\n\
     b          LAB_0803ce32\n\
LAB_0803ce2e:\n\
     add        r0,r2,#0x0\n\
     add        r0,#0x28\n\
LAB_0803ce32:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r2,r0,#0x10\n\
     b          LAB_0803ce46\n\
LAB_0803ce38:\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x28\n\
     b          LAB_0803ce42\n\
LAB_0803ce3e:\n\
     add        r0,r1,#0x0\n\
     add        r0,#0x28\n\
LAB_0803ce42:\n\
     lsl        r0,r0,#0x10\n\
     lsr        r1,r0,#0x10\n\
LAB_0803ce46:\n\
     add        r0,r1,#0x0\n\
     add        r1,r2,#0x0\n\
     bl         fun_080058bc\n\
     mov        r1,#0x8\n\
     and        r0,r1\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     pop        {r1}\n\
     bx         r1\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803ce5c()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     lsl        r0,r0,#0x10\n\
     lsr        r0,r0,#0x10\n\
     add        r3,r0,#0x0\n\
     lsl        r1,r1,#0x10\n\
     lsr        r1,r1,#0x10\n\
     lsl        r2,r2,#0x10\n\
     lsr        r2,r2,#0x10\n\
     add        r5,r1,#0x0\n\
     add        r4,r2,#0x0\n\
     cmp        r0,#0x1\n\
     beq        LAB_0803cec4\n\
     cmp        r0,#0x1\n\
     bgt        LAB_0803ce7e\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803ce88\n\
     b          LAB_0803cef0\n\
LAB_0803ce7e:\n\
     cmp        r3,#0x2\n\
     beq        LAB_0803ce88\n\
     cmp        r3,#0x3\n\
     beq        LAB_0803cec4\n\
     b          LAB_0803cef0\n\
LAB_0803ce88:\n\
     add        r0,r2,#0x0\n\
     sub        r0,#0x20\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     add        r6,r2,#0x0\n\
     add        r6,#0x20\n\
     cmp        r4,r6\n\
     bge        LAB_0803cef0\n\
     mov        r7,#0x8\n\
LAB_0803ce9a:\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080058bc\n\
     and        r0,r7\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803ceb6\n\
     add        r0,r4,#0x0\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r4,r0,#0x10\n\
     cmp        r4,r6\n\
     blt        LAB_0803ce9a\n\
     b          LAB_0803cef0\n\
LAB_0803ceb6:\n\
     ldr        r1,DAT_0803cec0\n\
     mov        r0,#0x1\n\
     strh       r0,[r1,#0x0]\n\
     b          LAB_0803cef0\n\
.space 1\n\
.space 1\n\
DAT_0803cec0:\n\
     .word 0x02011848\n\
LAB_0803cec4:\n\
     add        r0,r1,#0x0\n\
     sub        r0,#0x20\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     add        r6,r1,#0x0\n\
     add        r6,#0x20\n\
     cmp        r5,r6\n\
     bge        LAB_0803cef0\n\
     mov        r7,#0x8\n\
LAB_0803ced6:\n\
     add        r0,r5,#0x0\n\
     add        r1,r4,#0x0\n\
     bl         fun_080058bc\n\
     and        r0,r7\n\
     cmp        r0,#0x0\n\
     bne        LAB_0803ceb6\n\
     add        r0,r5,#0x0\n\
     add        r0,#0x8\n\
     lsl        r0,r0,#0x10\n\
     lsr        r5,r0,#0x10\n\
     cmp        r5,r6\n\
     blt        LAB_0803ced6\n\
LAB_0803cef0:\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803cef8()
{
    asm("\n\
     push       {r4,r5,r6,r7,lr}\n\
     sub        sp,#0x4\n\
     add        r4,r0,#0x0\n\
     add        r6,r1,#0x0\n\
     ldrh       r1,[r4,#0x4]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r4,#0x6]\n\
     mov        r1,sp\n\
     add        r1,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r4,#0x1c]\n\
     add        r7,r1,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803cf2e\n\
     ldrb       r1,[r4,#0x18]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r5,[r0,#0x0]\n\
     cmp        r5,#0x0\n\
     beq        LAB_0803cf2e\n\
     add        r0,r4,#0x0\n\
     add        r1,r6,#0x0\n\
     mov        r2,sp\n\
     add        r3,r7,#0x0\n\
     bl         _call_via_r5\n\
LAB_0803cf2e:\n\
     mov        r0,sp\n\
     ldrh       r1,[r0,#0x0]\n\
     ldrh       r2,[r7,#0x0]\n\
     add        r0,r4,#0x0\n\
     bl         fun_0803ca24\n\
     lsl        r0,r0,#0x18\n\
     lsr        r1,r0,#0x18\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r4,#0x4]\n\
     ldrh       r0,[r7,#0x0]\n\
     strh       r0,[r4,#0x6]\n\
     ldr        r0,[r4,#0xc]\n\
     cmp        r0,#0x0\n\
     beq        LAB_0803cf82\n\
     lsl        r0,r1,#0x18\n\
     asr        r1,r0,#0x18\n\
     mov        r0,#0x1\n\
.syntax unified\n\
    rsbs        r0,r0,#0\n\
.syntax divided\n\
     cmp        r1,r0\n\
     beq        LAB_0803cf82\n\
     cmp        r1,#0x1\n\
     beq        LAB_0803cf76\n\
     cmp        r1,#0x1\n\
     bgt        LAB_0803cf68\n\
     cmp        r1,#0x0\n\
     beq        LAB_0803cf72\n\
     b          LAB_0803cf82\n\
LAB_0803cf68:\n\
     cmp        r1,#0x2\n\
     beq        LAB_0803cf7a\n\
     cmp        r1,#0x3\n\
     beq        LAB_0803cf7e\n\
     b          LAB_0803cf82\n\
LAB_0803cf72:\n\
     ldrh       r0,[r6,#0x22]\n\
     b          LAB_0803cf80\n\
LAB_0803cf76:\n\
     ldrh       r0,[r6,#0x24]\n\
     b          LAB_0803cf80\n\
LAB_0803cf7a:\n\
     ldrh       r0,[r6,#0x26]\n\
     b          LAB_0803cf80\n\
LAB_0803cf7e:\n\
     ldrh       r0,[r6,#0x28]\n\
LAB_0803cf80:\n\
     strh       r0,[r4,#0x10]\n\
LAB_0803cf82:\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6,r7}\n\
     pop        {r0}\n\
     bx         r0\n\
    ");
}
__attribute__((naked)) void fun_0803cf8c()
{
    asm("\n\
     push       {lr}\n\
     str        r0,[r2,#0x0]\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0803cfa8\n\
     str        r0,[r2,#0x8]\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803ab8c\n\
     ldr        r1,DAT_0803cfac\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803cfa8:\n\
     .word 0x0803CEF9\n\
DAT_0803cfac:\n\
     .word 0x020117D0\n\
    ");
}

// unused
__attribute__((naked)) void fun_0803cfb0()
{
    asm("\n\
     push       {r4,r5,r6,lr}\n\
     sub        sp,#0x4\n\
     add        r5,r0,#0x0\n\
     add        r3,r1,#0x0\n\
     ldrh       r1,[r5,#0x4]\n\
     mov        r0,sp\n\
     strh       r1,[r0,#0x0]\n\
     ldrh       r0,[r5,#0x6]\n\
     mov        r1,sp\n\
     add        r1,#0x2\n\
     strh       r0,[r1,#0x0]\n\
     ldr        r2,[r5,#0x1c]\n\
     add        r6,r1,#0x0\n\
     cmp        r2,#0x0\n\
     beq        LAB_0803cfe6\n\
     ldrb       r1,[r5,#0x18]\n\
     lsl        r0,r1,#0x2\n\
     add        r0,r0,r2\n\
     ldr        r4,[r0,#0x0]\n\
     cmp        r4,#0x0\n\
     beq        LAB_0803cfe6\n\
     add        r0,r5,#0x0\n\
     add        r1,r3,#0x0\n\
     mov        r2,sp\n\
     add        r3,r6,#0x0\n\
     bl         _call_via_r4\n\
LAB_0803cfe6:\n\
     mov        r0,sp\n\
     ldrh       r0,[r0,#0x0]\n\
     strh       r0,[r5,#0x4]\n\
     ldrh       r0,[r6,#0x0]\n\
     strh       r0,[r5,#0x6]\n\
     bl         fun_080020a4\n\
     ldr        r4,DAT_0803d018\n\
     add        r0,r0,r4\n\
     ldrb       r1,[r0,#0x0]\n\
     add        r1,#0x1\n\
     strb       r1,[r0,#0x0]\n\
     bl         fun_080020a4\n\
     add        r0,r0,r4\n\
     ldrb       r0,[r0,#0x0]\n\
     cmp        r0,#0x1f\n\
     bls        LAB_0803d010\n\
     mov        r0,#0x1\n\
     strb       r0,[r5,#0x18]\n\
     str        r0,[r5,#0x8]\n\
LAB_0803d010:\n\
     add        sp,#0x4\n\
     pop        {r4,r5,r6}\n\
     pop        {r0}\n\
     bx         r0\n\
DAT_0803d018:\n\
     .word 0x00000DBD\n\
    ");
}
__attribute__((naked)) void fun_0803d01c()
{
    asm("\n\
     push       {lr}\n\
     str        r0,[r2,#0x0]\n\
     str        r1,[r2,#0x4]\n\
     ldr        r0,DAT_0803d038\n\
     str        r0,[r2,#0x8]\n\
     add        r0,r2,#0x0\n\
     bl         fun_0803ab8c\n\
     ldr        r1,DAT_0803d03c\n\
     mov        r0,#0x0\n\
     strh       r0,[r1,#0x0]\n\
     pop        {r0}\n\
     bx         r0\n\
.space 1\n\
.space 1\n\
DAT_0803d038:\n\
     .word 0x0803CFB1\n\
DAT_0803d03c:\n\
     .word 0x020117D0\n\
    ");
}

void decompress_selected_language()
{
    LZ77UnCompVram(languages_array[selected_language], &decompressed_language_text_buffer);
}

__attribute__((naked)) u16 ArcTan2(s16 x, s16 y)
{
    asm("\n\
     svc        0xa\n\
     bx         lr\n\
    ");
}

__attribute__((naked)) void CpuSet(const void* src, void* dest, u32 control)
{
    asm("\n\
     svc        0xb\n\
     bx         lr\n\
    ");
}

__attribute__((naked)) s32 Div(s32 over, s32 under)
{
    asm("\n\
     svc        0x6\n\
     bx         lr\n\
    ");
}

__attribute__((naked)) void LZ77UnCompVram(const void* src, void* dest)
{
    asm("\n\
     svc        0x12\n\
     bx         lr\n\
    ");
}

__attribute__((naked)) u16 Sqrt(u32 num)
{
    asm("\n\
     svc        0x8\n\
     bx         lr\n\
    ");
}
