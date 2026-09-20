__attribute__((naked)) void fun_08001744()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0803dda4\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    pop         {r1}\n\
    bx          r1\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08001754()
{
    asm("\n\
    push        {lr}\n\
    lsl         r1,r1,#0x10\n\
    lsr         r1,r1,#0x10\n\
    bl          fun_0803da44\n\
    pop         {r0}\n\
    bx          r0\n\
\n\
.space 2\n\
\n\
    ");
}
__attribute__((naked)) void fun_08001764()
{
    asm("\n\
    push        {lr}\n\
    bl          fun_0803de40\n\
    lsl         r0,r0,#0x10\n\
    lsr         r0,r0,#0x10\n\
    pop         {r1}\n\
    bx          r1\n\
    ");
}

__attribute__((naked)) void fun_08001774()
{
    asm("\n\
    push       {r4,r5,r6,lr}\n\
    lsl        r0,r0,#0x10\n\
    lsr        r4,r0,#0x10\n\
    mov        r2,#0x0\n\
    ldr        r3,DAT_08001794\n\
    add        r5,r3,#0x2\n\
LAB_08001780:\n\
    lsl        r1,r2,#0x2\n\
    add        r0,r1,r3\n\
    mov        r6,#0x0\n\
    ldrsh      r0,[r0,r6]\n\
    cmp        r4,r0\n\
    bne        LAB_08001798\n\
    add        r0,r1,r5\n\
    mov        r1,#0x0\n\
    ldrsh      r0,[r0,r1]\n\
    b          LAB_080017a6\n\
DAT_08001794:\n\
    .4byte     DAT_0875678c\n\
LAB_08001798:\n\
    add        r0,r2,#0x1\n\
    lsl        r0,r0,#0x10\n\
    lsr        r2,r0,#0x10\n\
    cmp        r2,#0x97\n\
    bls        LAB_08001780\n\
    mov        r0,#0x1\n\
.syntax unified\n\
    rsbs       r0,r0,#0\n\
.syntax divided\n\
LAB_080017a6:\n\
    pop        {r4,r5,r6}\n\
    pop        {r1}\n\
    bx         r1\n\
    ");
}
