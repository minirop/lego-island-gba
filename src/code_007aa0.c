#include "functions.h"

const LevelInfo subgame_select = {
    0,
    0,
    10,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    fun_080079a4,
    fun_08007d50,
    fun_08007aa0,
    NULL,
    NULL,
    NULL,
    0,
    0,
    "SubGame Select",
    "Blank",
    "Blank",
    "Blank",
    "Blank",
};

__attribute__((naked)) s32 fun_08007aa0()
{
    asm("\n\
    push        {r4,r5,lr}\n\
    sub         sp,#0x34\n\
    bl          fun_08007c68\n\
    ldr         r0,DAT_08007ab8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007abc\n\
    bl          fun_08007888\n\
    b           LAB_08007ac0\n\
\n\
.space 2\n\
\n\
DAT_08007ab8:\n\
    .word 0x02005750\n\
LAB_08007abc:\n\
    bl          fun_08007794\n\
LAB_08007ac0:\n\
    ldr         r0,DAT_08007af8\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007b10\n\
    ldr         r1,DAT_08007afc\n\
    ldr         r4,DAT_08007b00\n\
    ldr         r0,DAT_08007b04\n\
    ldr         r3,[r0,#0x0]\n\
    lsl         r3,r3,#0x2\n\
    ldr         r5,DAT_08007b08\n\
    ldr         r0,DAT_08007b0c\n\
    mov         r2,#0x0\n\
    ldrsb       r2,[r0,r2]\n\
    lsl         r2,r2,#0x1\n\
    add         r2,r2,r5\n\
    ldrh        r5,[r2,#0x0]\n\
    lsl         r0,r5,#0x1\n\
    add         r0,r0,r5\n\
    lsl         r0,r0,#0x4\n\
    add         r3,r3,r0\n\
    add         r4,#0x4\n\
    add         r3,r3,r4\n\
    ldr         r2,[r3,#0x0]\n\
    mov         r0,sp\n\
    bl          sprintf\n\
    b           LAB_08007b3c\n\
\n\
.space 2\n\
\n\
DAT_08007af8:\n\
    .word 0x02005750\n\
DAT_08007afc:\n\
    .word 0x0809A324\n\
DAT_08007b00:\n\
    .word 0x08669620\n\
DAT_08007b04:\n\
    .word 0x020025B4\n\
DAT_08007b08:\n\
    .word 0x0877BAF0\n\
DAT_08007b0c:\n\
    .word 0x02009B84\n\
LAB_08007b10:\n\
    ldr         r1,DAT_08007b74\n\
    ldr         r4,DAT_08007b78\n\
    ldr         r0,DAT_08007b7c\n\
    ldr         r3,[r0,#0x0]\n\
    lsl         r3,r3,#0x2\n\
    ldr         r5,DAT_08007b80\n\
    ldr         r0,DAT_08007b84\n\
    mov         r2,#0x0\n\
    ldrsb       r2,[r0,r2]\n\
    lsl         r2,r2,#0x1\n\
    add         r2,r2,r5\n\
    ldrh        r5,[r2,#0x0]\n\
    lsl         r0,r5,#0x1\n\
    add         r0,r0,r5\n\
    lsl         r0,r0,#0x4\n\
    add         r3,r3,r0\n\
    add         r4,#0x4\n\
    add         r3,r3,r4\n\
    ldr         r2,[r3,#0x0]\n\
    mov         r0,sp\n\
    bl          sprintf\n\
LAB_08007b3c:\n\
    bl          fun_0803c1a4\n\
    ldr         r2,DAT_08007b88\n\
    mov         r0,sp\n\
    mov         r1,#0x85\n\
    bl          fun_0803c010\n\
    ldr         r0,DAT_08007b8c\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007bac\n\
    ldr         r1,DAT_08007b90\n\
    ldr         r0,DAT_08007b84\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r1,[r0,#0x0]\n\
    ldr         r0,DAT_08007b94\n\
    cmp         r1,r0\n\
    beq         LAB_08007b9e\n\
    cmp         r1,r0\n\
    bgt         LAB_08007b98\n\
    sub         r0,#0xf\n\
    cmp         r1,r0\n\
    beq         LAB_08007b9e\n\
    b           LAB_08007ba8\n\
DAT_08007b74:\n\
    .word 0x0809A324\n\
DAT_08007b78:\n\
    .word 0x08669620\n\
DAT_08007b7c:\n\
    .word 0x020025B4\n\
DAT_08007b80:\n\
    .word 0x0877BA48\n\
DAT_08007b84:\n\
    .word 0x02009B84\n\
DAT_08007b88:\n\
    .word 0x0865FD94\n\
DAT_08007b8c:\n\
    .word 0x02005750\n\
DAT_08007b90:\n\
    .word 0x0877BB18\n\
DAT_08007b94:\n\
    .word 0x000007E9\n\
LAB_08007b98:\n\
    ldr         r0,DAT_08007ba4\n\
    cmp         r1,r0\n\
    bne         LAB_08007ba8\n\
LAB_08007b9e:\n\
    add         r0,r1,#0x0\n\
    b           LAB_08007bc4\n\
\n\
.space 2\n\
\n\
DAT_08007ba4:\n\
    .word 0x000007EB\n\
LAB_08007ba8:\n\
    mov         r0,#0x1\n\
    b           LAB_08007bc8\n\
LAB_08007bac:\n\
    ldr         r1,DAT_08007bf4\n\
    ldr         r0,DAT_08007bf8\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    bl          fun_08000ee8\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
LAB_08007bc4:\n\
    bl          fun_080020bc\n\
LAB_08007bc8:\n\
    lsl         r0,r0,#0x10\n\
    lsr         r4,r0,#0x10\n\
    bl          fun_080013f4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c24\n\
    cmp         r4,#0x0\n\
    beq         LAB_08007c24\n\
    ldr         r1,DAT_08007bfc\n\
    ldrh        r0,[r1,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c00\n\
    ldr         r0,DAT_08007bf8\n\
    ldrb        r0,[r0,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    asr         r0,r0,#0x18\n\
    strh        r0,[r1,#0x6]\n\
    mov         r0,#0x27\n\
    bl          fun_08001070\n\
    b           LAB_08007c24\n\
DAT_08007bf4:\n\
    .word 0x0877BAB4\n\
DAT_08007bf8:\n\
    .word 0x02009B84\n\
DAT_08007bfc:\n\
    .word 0x02005750\n\
LAB_08007c00:\n\
    ldr         r3,DAT_08007c50\n\
    ldrb        r0,[r3,#0x0]\n\
    cmp         r0,#0x11\n\
    bne         LAB_08007c0e\n\
    ldr         r1,DAT_08007c54\n\
    mov         r0,#0x1\n\
    strh        r0,[r1,#0x0]\n\
LAB_08007c0e:\n\
    ldr         r2,DAT_08007c58\n\
    ldr         r1,DAT_08007c5c\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r3,r0]\n\
    lsl         r0,r0,#0x1\n\
    add         r0,r0,r1\n\
    ldrh        r0,[r0,#0x0]\n\
    strh        r0,[r2,#0x0]\n\
    mov         r0,#0x22\n\
    bl          fun_08001088\n\
LAB_08007c24:\n\
    bl          fun_0800140c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c44\n\
    ldr         r0,DAT_08007c60\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c3a\n\
    bl          fun_08002844\n\
LAB_08007c3a:\n\
    bl          fun_080010d8\n\
    ldr         r1,DAT_08007c64\n\
    mov         r0,#0x0\n\
    strh        r0,[r1,#0x0]\n\
LAB_08007c44:\n\
    mov         r0,#0x0\n\
    add         sp,#0x34\n\
    pop         {r4,r5}\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
DAT_08007c50:\n\
    .word 0x02009B84\n\
DAT_08007c54:\n\
    .word 0x020025F8\n\
DAT_08007c58:\n\
    .word 0x020025E8\n\
DAT_08007c5c:\n\
    .word 0x0877BAB4\n\
DAT_08007c60:\n\
    .word 0x02005750\n\
DAT_08007c64:\n\
    .word 0x02002530\n\
    ");
}
__attribute__((naked)) void fun_08007c68()
{
    asm("\n\
    push        {r4,lr}\n\
    bl          fun_08001374\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007c86\n\
    ldr         r4,DAT_08007cd8\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    add         r0,#0x1\n\
    ldr         r1,DAT_08007cdc\n\
    ldrh        r1,[r1,#0x0]\n\
    bl          __modsi3\n\
    strb        r0,[r4,#0x0]\n\
LAB_08007c86:\n\
    bl          fun_0800135c\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007ca6\n\
    ldr         r1,DAT_08007cd8\n\
    ldrb        r0,[r1,#0x0]\n\
    sub         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
    lsl         r0,r0,#0x18\n\
    cmp         r0,#0x0\n\
    bge         LAB_08007ca6\n\
    ldr         r0,DAT_08007cdc\n\
    ldrb        r0,[r0,#0x0]\n\
    sub         r0,#0x1\n\
    strb        r0,[r1,#0x0]\n\
LAB_08007ca6:\n\
    bl          fun_080013c4\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007cea\n\
    ldr         r0,DAT_08007cdc\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x12\n\
    bne         LAB_08007cea\n\
    ldr         r3,DAT_08007cd8\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r3,r0]\n\
    ldr         r2,DAT_08007ce0\n\
    ldrb        r1,[r2,#0x0]\n\
    cmp         r0,r1\n\
    blt         LAB_08007cd2\n\
    ldrb        r1,[r2,#0x1]\n\
    cmp         r0,r1\n\
    blt         LAB_08007cd2\n\
    ldrb        r1,[r2,#0x2]\n\
    cmp         r0,r1\n\
    bge         LAB_08007ce4\n\
LAB_08007cd2:\n\
    strb        r1,[r3,#0x0]\n\
    b           LAB_08007d4a\n\
\n\
.space 2\n\
\n\
DAT_08007cd8:\n\
    .word 0x02009B84\n\
DAT_08007cdc:\n\
    .word 0x02009B80\n\
DAT_08007ce0:\n\
    .word 0x0877BB28\n\
LAB_08007ce4:\n\
    mov         r0,#0x0\n\
    strb        r0,[r3,#0x0]\n\
    b           LAB_08007d4a\n\
LAB_08007cea:\n\
    bl          fun_080013dc\n\
    lsl         r0,r0,#0x10\n\
    cmp         r0,#0x0\n\
    beq         LAB_08007d4a\n\
    ldr         r0,DAT_08007d10\n\
    ldrh        r0,[r0,#0x0]\n\
    cmp         r0,#0x12\n\
    bne         LAB_08007d4a\n\
    ldr         r4,DAT_08007d14\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    cmp         r0,#0x0\n\
    bne         LAB_08007d1c\n\
    ldr         r0,DAT_08007d18\n\
    ldrb        r0,[r0,#0x2]\n\
    strb        r0,[r4,#0x0]\n\
    b           LAB_08007d4a\n\
\n\
.space 2\n\
\n\
DAT_08007d10:\n\
    .word 0x02009B80\n\
DAT_08007d14:\n\
    .word 0x02009B84\n\
DAT_08007d18:\n\
    .word 0x0877BB28\n\
LAB_08007d1c:\n\
    mov         r0,#0x0\n\
    ldrsb       r0,[r4,r0]\n\
    ldr         r3,DAT_08007d30\n\
    ldrb        r2,[r3,#0x0]\n\
    cmp         r0,r2\n\
    bgt         LAB_08007d34\n\
    mov         r0,#0x0\n\
    strb        r0,[r4,#0x0]\n\
    b           LAB_08007d4a\n\
\n\
.space 2\n\
\n\
DAT_08007d30:\n\
    .word 0x0877BB28\n\
LAB_08007d34:\n\
    ldrb        r1,[r3,#0x2]\n\
    cmp         r0,r1\n\
    bgt         LAB_08007d40\n\
    ldrb        r1,[r3,#0x1]\n\
    cmp         r0,r1\n\
    ble         LAB_08007d44\n\
LAB_08007d40:\n\
    strb        r1,[r4,#0x0]\n\
    b           LAB_08007d4a\n\
LAB_08007d44:\n\
    cmp         r0,r2\n\
    ble         LAB_08007d4a\n\
    strb        r2,[r4,#0x0]\n\
LAB_08007d4a:\n\
    pop         {r4}\n\
    pop         {r0}\n\
    bx          r0\n\
    ");
}

s32 fun_08007d50()
{
    fun_0800457c();
    return 0;
}

__attribute__((naked)) void fun_08007d5c()
{
    asm("\n\
    push       {lr}\n\
    lsl        r0,r0,#0x10\n\
    lsr        r1,r0,#0x10\n\
    ldr        r0,DAT_08007d74\n\
    cmp        r1,r0\n\
    beq        LAB_08007d7e\n\
    cmp        r1,r0\n\
    bgt        LAB_08007d78\n\
    sub        r0,#0xf\n\
    cmp        r1,r0\n\
    beq        LAB_08007d7e\n\
    b          LAB_08007d90\n\
DAT_08007d74:\n\
    .word 0x000007E9\n\
LAB_08007d78:\n\
    ldr        r0,DAT_08007d8c\n\
    cmp        r1,r0\n\
    bne        LAB_08007d90\n\
LAB_08007d7e:\n\
    add        r0,r1,#0x0\n\
    bl         fun_080020bc\n\
    lsl        r0,r0,#0x10\n\
    lsr        r0,r0,#0x10\n\
    b          LAB_08007d92\n\
.space 2\n\
DAT_08007d8c:\n\
    .word 0x000007EB\n\
LAB_08007d90:\n\
    mov        r0,#0x1\n\
LAB_08007d92:\n\
    pop        {r1}\n\
    bx         r1\n\
    ");
}

__attribute__((naked)) void fun_08007d98()
{
    asm("\n\
    push       {r4,r5,r6,lr}\n\
    mov        r4,#0x80\n\
    lsl        r4,r4,#0x13\n\
    ldr        r0,DAT_08007dd0\n\
    add        r6,r0,#0x0\n\
    strh       r6,[r4,#0x0]\n\
    ldr        r5,PTR_DAT_08007dd4\n\
    ldr        r1,PTR_DAT_08007dd8\n\
    add        r0,r5,#0x0\n\
    bl         fun_0803d070\n\
    bl         fun_08002bcc\n\
    ldr        r1,DAT_08007ddc\n\
    add        r0,r1,#0x0\n\
    strh       r0,[r4,#0x0]\n\
    mov        r1,#0xc0\n\
    lsl        r1,r1,#0x13\n\
    add        r0,r5,#0x0\n\
    bl         fun_0803d070\n\
    bl         fun_08002bcc\n\
    strh       r6,[r4,#0x0]\n\
    pop        {r4,r5,r6}\n\
    pop        {r0}\n\
    bx         r0\n\
.space 2\n\
DAT_08007dd0:\n\
    .word 0x00001F44\n\
PTR_DAT_08007dd4:\n\
    .word DAT_080aaa2c\n\
PTR_DAT_08007dd8:\n\
    .word DAT_0600a000\n\
DAT_08007ddc:\n\
    .word 0x00001F54\n\
    ");
}
