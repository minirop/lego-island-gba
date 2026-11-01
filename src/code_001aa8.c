#include "functions.h"
#include "variables.h"
#include <string.h>

__attribute__((naked)) u16 fun_08001aa8()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r8\n\
    push        {r7}\n\
    mov         r6,#0x1\n\
    ldr         r1,DAT_08001b7c\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
    mov         r0,#0xe0\n\
    lsl         r0,r0,#0x14\n\
    ldr         r4,DAT_08001b80\n\
    ldr         r1,DAT_08001b84\n\
    mov         r8,r1\n\
    add         r1,r4,#0x0\n\
    mov         r2,r8\n\
    bl          fun_0803d09c\n\
    ldr         r0,DAT_08001b88\n\
    ldr         r7,DAT_08001b8c\n\
    add         r1,r7,#0x0\n\
    mov         r2,#0x4\n\
    bl          fun_0803d09c\n\
    ldr         r0,DAT_08001b90\n\
    ldr         r5,DAT_08001b94\n\
    mov         r2,#0xd8\n\
    lsl         r2,r2,#0x2\n\
    add         r1,r5,#0x0\n\
    bl          fun_0803d09c\n\
    ldr         r1,[r4,#0x0]\n\
    ldr         r0,DAT_08001b98\n\
    cmp         r1,r0\n\
    beq         LAB_08001aec\n\
    mov         r6,#0x0\n\
LAB_08001aec:\n\
    cmp         r6,#0x0\n\
    beq         LAB_08001b44\n\
    ldr         r0,[r4,#0x4]\n\
    mov         r12,r0\n\
    mov         r0,#0x0\n\
    str         r0,[r4,#0x0]\n\
    str         r0,[r4,#0x4]\n\
    add         r1,r4,#0x0\n\
    mov         r2,r8\n\
    mov         r3,#0x0\n\
    add         r4,r7,#0x0\n\
LAB_08001b02:\n\
    ldrb        r7,[r1,#0x0]\n\
    add         r3,r7,r3\n\
    add         r1,#0x1\n\
    add         r0,#0x1\n\
    cmp         r0,r2\n\
    bcc         LAB_08001b02\n\
    add         r1,r4,#0x0\n\
    mov         r2,#0x0\n\
    mov         r0,#0x0\n\
LAB_08001b14:\n\
    ldrb        r4,[r1,#0x0]\n\
    add         r2,r4,r2\n\
    add         r1,#0x1\n\
    add         r0,#0x1\n\
    cmp         r0,#0x4\n\
    bcc         LAB_08001b14\n\
    add         r3,r3,r2\n\
    add         r1,r5,#0x0\n\
    mov         r4,#0xd8\n\
    lsl         r4,r4,#0x2\n\
    mov         r2,#0x0\n\
    mov         r0,#0x0\n\
LAB_08001b2c:\n\
    ldrb        r5,[r1,#0x0]\n\
    add         r2,r5,r2\n\
    add         r1,#0x1\n\
    add         r0,#0x1\n\
    cmp         r0,r4\n\
    bcc         LAB_08001b2c\n\
    add         r3,r3,r2\n\
    cmp         r12,r3\n\
    beq         LAB_08001b40\n\
    mov         r6,#0x0\n\
LAB_08001b40:\n\
    cmp         r6,#0x0\n\
    bne         LAB_08001b68\n\
LAB_08001b44:\n\
    ldr         r0,DAT_08001b80\n\
    ldr         r2,DAT_08001b84\n\
    mov         r1,#0x0\n\
    bl          memset\n\
    ldr         r0,DAT_08001b8c\n\
    mov         r1,#0x0\n\
    mov         r2,#0x4\n\
    bl          memset\n\
    ldr         r0,DAT_08001b94\n\
    mov         r2,#0xd8\n\
    lsl         r2,r2,#0x2\n\
    mov         r1,#0x0\n\
    bl          memset\n\
    bl          fun_08000584\n\
LAB_08001b68:\n\
    ldr         r1,DAT_08001b7c\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
    add         r0,r6,#0x0\n\
    pop         {r3}\n\
    mov         r8,r3\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08001b7c:\n\
    .word 0x04000208\n\
DAT_08001b80:\n\
    .word 0x02002620\n\
DAT_08001b84:\n\
    .word 0x00002BE0\n\
DAT_08001b88:\n\
    .word 0x0E002BE0\n\
DAT_08001b8c:\n\
    .word 0x02005200\n\
DAT_08001b90:\n\
    .word 0x0E002BE4\n\
DAT_08001b94:\n\
    .word 0x02005210\n\
DAT_08001b98:\n\
    .word 0x48FED829\n\
    ");
}

static inline s32 checksum_loop(u8* ptr, u32 count)
{
    u32 temp_sum;
    u32 i;

    temp_sum = 0;
    for (i = 0; i < count; i++)
    {
        temp_sum += *ptr++;
    }
    return temp_sum;
}

s32 fun_08001b9c()
{
    u32 total_sum;
    char local_14[4] = "SWD";
    REG_IME = 0;

    DAT_02002620[0].unk00 = DAT_02002620[1].unk00 = DAT_02002620[2].unk00 = 0;
    DAT_02002620[0].unk04 = DAT_02002620[1].unk04 = DAT_02002620[2].unk04 = 0;

    total_sum = checksum_loop((u8*)DAT_02002620, sizeof(DAT_02002620));
    total_sum += checksum_loop((u8*)local_14, sizeof(local_14));
    total_sum += checksum_loop((u8*)DAT_02005210, sizeof(DAT_02005210));

    DAT_02002620[0].unk04 = total_sum;
    DAT_02002620[0].unk00 = 0xfa988912;

    fun_0803d100((u8*)DAT_02002620, (void*)0xe000000, sizeof(DAT_02002620));
    fun_0803d100((u8*)local_14, (void*)0xe002be0, 4);
    fun_0803d100((u8*)DAT_02005210, (void*)0xe002be4, sizeof(DAT_02005210));
    DAT_02002620[0].unk00 = 0x48fed829;
    fun_0803d100((u8*)DAT_02002620, (void*)0xe000000, sizeof(local_14));
    REG_IME = 1;

    return 1;
}

__attribute__((naked)) void fun_08001c8c()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    sub         sp,#0x4\n\
    mov         r0,#0x0\n\
    mov         r8,r0\n\
    bl          fun_08001aa8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    str         r0,[sp,#0x0]\n\
    bl          fun_080020a4\n\
    add         r0,#0x8\n\
    ldr         r4,DAT_08001cf4\n\
    add         r1,r4,#0x0\n\
    bl          strcmp\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001cd6\n\
    bl          fun_080020a4\n\
    mov         r1,#0x0\n\
    mov         r2,#0xea\n\
    lsl         r2,r2,#0x4\n\
    bl          memset\n\
    bl          fun_080020a4\n\
    add         r0,#0x8\n\
    add         r1,r4,#0x0\n\
    ldmia       r1!,{r2,r3,r4}\n\
    stmia       r0!,{r2,r3,r4}\n\
    bl          fun_08001b9c\n\
LAB_08001cd6:\n\
    ldr         r3,DAT_08001cf8\n\
    ldr         r4,DAT_08001cfc\n\
    mov         r2,#0xea\n\
    lsl         r2,r2,#0x4\n\
    ldrb        r1,[r4,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r2\n\
    add         r1,r3,#0x0\n\
    add         r1,#0x14\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001d00\n\
    mov         r0,#0x0\n\
    b           LAB_08001e00\n\
DAT_08001cf4:\n\
    .word 0x08049790\n\
DAT_08001cf8:\n\
    .word 0x02002620\n\
DAT_08001cfc:\n\
    .word 0x02005570\n\
LAB_08001d00:\n\
    mov         r0,#0x0\n\
    mov         r12,r0\n\
    ldr         r1,DAT_08001e10\n\
    mov         r9,r1\n\
    add         r7,r3,#0x0\n\
    add         r6,r4,#0x0\n\
    add         r5,r2,#0x0\n\
    mov         r2,#0x8a\n\
    lsl         r2,r2,#0x3\n\
    add         r2,r2,r7\n\
    mov         r10,r2\n\
LAB_08001d16:\n\
    mov         r3,r12\n\
    lsl         r4,r3,#0x5\n\
    mov         r0,r9\n\
    add         r3,r4,r0\n\
    mov         r0,#0x4\n\
    ldrh        r1,[r3,#0x12]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001da6\n\
    mov         r0,r8\n\
    lsl         r2,r0,#0x2\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r2,r0\n\
    add         r1,r7,#0x0\n\
    add         r1,#0x1e\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0x4]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r2,r0\n\
    add         r1,r7,#0x0\n\
    add         r1,#0x20\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0x6]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r8\n\
    ldr         r1,DAT_08001e14\n\
    add         r0,r0,r1\n\
    ldrb        r0,[r0,#0x0]\n\
    strb        r0,[r3,#0x18]\n\
    mov         r1,r9\n\
    add         r1,#0x8\n\
    add         r1,r4,r1\n\
    ldrb        r4,[r6,#0x0]\n\
    add         r0,r4,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    add         r2,r10\n\
    ldr         r0,[r2,#0x0]\n\
    str         r0,[r1,#0x0]\n\
    mov         r0,r8\n\
    lsl         r2,r0,#0x1\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r2,r0\n\
    ldr         r4,DAT_08001e18\n\
    add         r1,r7,r4\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r3,#0x12]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    ldr         r4,DAT_08001e1c\n\
    add         r0,r7,r4\n\
    add         r2,r2,r0\n\
    ldrh        r0,[r2,#0x0]\n\
    strh        r0,[r3,#0x10]\n\
    mov         r0,r8\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
LAB_08001da6:\n\
    mov         r0,r12\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r12,r0\n\
    cmp         r0,#0xf3\n\
    bls         LAB_08001d16\n\
    mov         r4,#0x0\n\
    ldr         r0,DAT_08001e20\n\
    mov         r10,r0\n\
    ldr         r6,DAT_08001e24\n\
    mov         r5,#0xea\n\
    lsl         r5,r5,#0x4\n\
    ldr         r1,DAT_08001e28\n\
    add         r1,r10\n\
    mov         r9,r1\n\
    mov         r2,#0xa8\n\
    lsl         r2,r2,#0x1\n\
    mov         r8,r2\n\
LAB_08001dcc:\n\
    add         r0,r4,#0x0\n\
    bl          fun_080034c0\n\
    lsl         r3,r4,#0x1\n\
    ldrb        r2,[r6,#0x0]\n\
    add         r1,r2,#0x0\n\
    mul         r1,r5\n\
    add         r1,r3,r1\n\
    ldr         r2,DAT_08001e2c\n\
    add         r2,r10\n\
    add         r1,r1,r2\n\
    ldrh        r1,[r1,#0x0]\n\
    strh        r1,[r0,#0x4]\n\
    ldrb        r2,[r6,#0x0]\n\
    add         r1,r2,#0x0\n\
    mul         r1,r5\n\
    add         r3,r3,r1\n\
    add         r3,r9\n\
    ldrh        r1,[r3,#0x0]\n\
    strh        r1,[r0,#0x6]\n\
    add         r0,r4,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    cmp         r4,r8\n\
    bls         LAB_08001dcc\n\
    ldr         r0,[sp,#0x0]\n\
LAB_08001e00:\n\
    add         sp,#0x4\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08001e10:\n\
    .word 0x020006A0\n\
DAT_08001e14:\n\
    .word 0x020029D4\n\
DAT_08001e18:\n\
    .word 0x00000282\n\
DAT_08001e1c:\n\
    .word 0x000006B4\n\
DAT_08001e20:\n\
    .word 0x02002620\n\
DAT_08001e24:\n\
    .word 0x02005570\n\
DAT_08001e28:\n\
    .word 0x00000A88\n\
DAT_08001e2c:\n\
    .word 0x000007E6\n\
    ");
}

__attribute__((naked)) void fun_08001e30()
{
    asm("\n\
    push        {r4,r5,r6,r7,lr}\n\
    mov         r7,r10\n\
    mov         r6,r9\n\
    mov         r5,r8\n\
    push        {r5,r6,r7}\n\
    mov         r0,#0x0\n\
    mov         r8,r0\n\
    bl          fun_080020a4\n\
    ldr         r1,DAT_08001f78\n\
    add         r0,r0,r1\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r1,#0x80\n\
    lsl         r1,r1,#0x6\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001e58\n\
    mov         r0,#0x0\n\
    bl          fun_08018d48\n\
LAB_08001e58:\n\
    mov         r4,#0x0\n\
    mov         r12,r4\n\
    ldr         r0,DAT_08001f7c\n\
    mov         r9,r0\n\
    ldr         r7,DAT_08001f80\n\
    ldr         r6,DAT_08001f84\n\
    mov         r5,#0xea\n\
    lsl         r5,r5,#0x4\n\
    mov         r1,#0x8a\n\
    lsl         r1,r1,#0x3\n\
    add         r1,r1,r7\n\
    mov         r10,r1\n\
LAB_08001e70:\n\
    mov         r0,r12\n\
    lsl         r4,r0,#0x5\n\
    mov         r1,r9\n\
    add         r3,r4,r1\n\
    mov         r0,#0x4\n\
    ldrh        r1,[r3,#0x12]\n\
    and         r0,r1\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001f00\n\
    mov         r0,r8\n\
    lsl         r2,r0,#0x2\n\
    ldrb        r0,[r6,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r5\n\
    add         r1,r2,r1\n\
    add         r0,r7,#0x0\n\
    add         r0,#0x1e\n\
    add         r1,r1,r0\n\
    ldrh        r0,[r3,#0x4]\n\
    strh        r0,[r1,#0x0]\n\
    ldrb        r0,[r6,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r5\n\
    add         r1,r2,r1\n\
    add         r0,r7,#0x0\n\
    add         r0,#0x20\n\
    add         r1,r1,r0\n\
    ldrh        r0,[r3,#0x6]\n\
    strh        r0,[r1,#0x0]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r0,r8\n\
    ldr         r1,DAT_08001f88\n\
    add         r0,r0,r1\n\
    ldrb        r1,[r3,#0x18]\n\
    strb        r1,[r0,#0x0]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    add         r2,r10\n\
    mov         r0,r9\n\
    add         r0,#0x8\n\
    add         r0,r4,r0\n\
    ldr         r0,[r0,#0x0]\n\
    str         r0,[r2,#0x0]\n\
    mov         r4,r8\n\
    lsl         r2,r4,#0x1\n\
    ldrb        r0,[r6,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r5\n\
    add         r1,r2,r1\n\
    ldr         r4,DAT_08001f8c\n\
    add         r0,r7,r4\n\
    add         r1,r1,r0\n\
    ldrh        r0,[r3,#0x12]\n\
    strh        r0,[r1,#0x0]\n\
    ldrb        r1,[r6,#0x0]\n\
    add         r0,r1,#0x0\n\
    mul         r0,r5\n\
    add         r2,r2,r0\n\
    ldr         r4,DAT_08001f90\n\
    add         r0,r7,r4\n\
    add         r2,r2,r0\n\
    ldrh        r0,[r3,#0x10]\n\
    strh        r0,[r2,#0x0]\n\
    mov         r0,r8\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r8,r0\n\
LAB_08001f00:\n\
    mov         r0,r12\n\
    add         r0,#0x1\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    mov         r12,r0\n\
    cmp         r0,#0xf3\n\
    bls         LAB_08001e70\n\
    bl          fun_080020a4\n\
    ldr         r6,DAT_08001f78\n\
    add         r0,r0,r6\n\
    ldr         r0,[r0,#0x0]\n\
    mov         r5,#0x80\n\
    lsl         r5,r5,#0x6\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001f26\n\
    bl          fun_08001f94\n\
LAB_08001f26:\n\
    ldr         r2,DAT_08001f80\n\
    ldr         r4,DAT_08001f84\n\
    mov         r3,#0xea\n\
    lsl         r3,r3,#0x4\n\
    ldrb        r0,[r4,#0x0]\n\
    add         r1,r0,#0x0\n\
    mul         r1,r3\n\
    add         r2,#0x14\n\
    add         r1,r1,r2\n\
    ldr         r0,[r1,#0x0]\n\
    add         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
    ldrb        r4,[r4,#0x0]\n\
    add         r0,r4,#0x0\n\
    mul         r0,r3\n\
    add         r1,r0,r2\n\
    ldr         r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08001f50\n\
    mov         r0,#0x1\n\
    str         r0,[r1,#0x0]\n\
LAB_08001f50:\n\
    bl          fun_08001b9c\n\
    bl          fun_080020a4\n\
    add         r0,r0,r6\n\
    ldr         r0,[r0,#0x0]\n\
    and         r0,r5\n\
    cmp         r0,#0x0\n\
    beq         LAB_08001f68\n\
    mov         r0,#0x1\n\
    bl          fun_08018d48\n\
LAB_08001f68:\n\
    mov         r0,#0x1\n\
    pop         {r3,r4,r5}\n\
    mov         r8,r3\n\
    mov         r9,r4\n\
    mov         r10,r5\n\
    pop         {r4,r5,r6,r7}\n\
    pop         {r1}\n\
    bx          r1\n\
DAT_08001f78:\n\
    .word 0x00000E84\n\
DAT_08001f7c:\n\
    .word 0x020006A0\n\
DAT_08001f80:\n\
    .word 0x02002620\n\
DAT_08001f84:\n\
    .word 0x02005570\n\
DAT_08001f88:\n\
    .word 0x020029D4\n\
DAT_08001f8c:\n\
    .word 0x00000282\n\
DAT_08001f90:\n\
    .word 0x000006B4\n\
    ");
}

void fun_08001f94()
{
    u16 i;

    for (i = 0; i < 0x151; i++)
    {
        if (DAT_02002620[DAT_02005570].unk7E6[0])
            ; // Required to match
        (&DAT_02002620[DAT_02005570].unk7E6[0])[i] = fun_080034c0(i)->unk04;
        (&DAT_02002620[DAT_02005570].unkA88[0])[i] = fun_080034c0(i)->unk06;
    }
}

void fun_0800200c()
{
    memset(fun_080020a4(), 0, sizeof(struct_02002620));
    memcpy(&fun_080020a4()->unk08, "GOGOMONKEYX", 12);
    fun_08001b9c();
}
const char* dummy_0804979c = "MultiSioSync010316";

static inline void fun_08002038_wrapper()
{
    memset(fun_080020a4(), 0, sizeof(struct_02002620));
}

void fun_08002038()
{
    if (strcmp((const char*)&fun_080020a4()->unk08, "GOGOMONKEYX"))
    {
        fun_08002038_wrapper();
        memcpy(&fun_080020a4()->unk08, "GOGOMONKEYX", 12);
        fun_08001b9c();
    }
}

s32 fun_08002074(u8 param_1)
{
    s32 i = 0;
    if (strcmp(DAT_02002620[param_1].unk08, "GOGOMONKEYX") == 0)
    {
        i = 1;
    }
    return i;
}

struct_02002620* fun_080020a4()
{
    return &DAT_02002620[DAT_02005570];
}

s32 fun_080020bc(u16 param_1)
{
    s32 ret;
    if (param_1 == 0x18)
    {
        param_1 = 0x7d8;
    }
    if ((u16)(param_1 - 2000) >= 0x1c)
    {
        return 1;
    }
    else
    {
        struct_02002620* ptr = &DAT_02002620[DAT_02005570];
        return ((ptr->unk0e88 & (1 << ((param_1 - 2000)))) != 0);
    }
}

void fun_08002114(u16 param_1)
{
    u16 tmp;
    if (param_1 == 0x18)
    {
        param_1 = 0x7d8;
    }

    tmp = param_1 - 2000;
    if (tmp < 0x1c)
    {
        struct_02002620* ptr = &DAT_02002620[DAT_02005570];
        ptr->unk0e88 |= (1 << (param_1 - 2000));
    }
}

void fun_08002160()
{
    s32 iVar1;

    fun_08001aa8();
    iVar1 = strcmp("SWD", (const char*)&DAT_02005200);
    if (iVar1 != 0)
    {
        fun_08000584();
        fun_08001b9c();
    }
}

u16 fun_08002188()
{
    if (fun_08001aa8() == 0)
    {
        return 0;
    }
    return 1;
}

u32 SumByteArray(u8* bytes, u32 length)
{
    u32 i;
    u32 sum = 0;

    for (i = 0; i < length; i++)
    {
        sum += *(bytes++);
    }

    return sum;
}

asm(".space 2");
