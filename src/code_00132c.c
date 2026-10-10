#include "defines.h"
#include "variables.h"

IS_BIT_SET(fun_0800132c, DAT_02005ce0, 8)
IS_BIT_SET(fun_08001344, DAT_02005ce0, 4)
IS_BIT_SET(fun_0800135c, DAT_02005ce0, 0x20)
IS_BIT_SET(fun_08001374, DAT_02005ce0, 0x10)
IS_BIT_SET(fun_0800138c, DAT_02005ce0, 0x200)
IS_BIT_SET(fun_080013a8, DAT_02005ce0, 0x100)
IS_BIT_SET(fun_080013c4, DAT_02005ce0, 0x40)
IS_BIT_SET(fun_080013dc, DAT_02005ce0, 0x80)
IS_BIT_SET(fun_080013f4, DAT_02005ce0, 1)
IS_BIT_SET(fun_0800140c, DAT_02005ce0, 2)

IS_BIT_SET(fun_08001424, DAT_02005830, 8)
IS_BIT_SET(fun_0800143c, DAT_02005830, 4)
IS_BIT_SET(fun_08001454, DAT_02005830, 0x20)
IS_BIT_SET(fun_0800146c, DAT_02005830, 0x10)
IS_BIT_SET(fun_08001484, DAT_02005830, 0x200)
IS_BIT_SET(fun_080014a0, DAT_02005830, 0x100)
IS_BIT_SET(fun_080014bc, DAT_02005830, 0x40)
IS_BIT_SET(fun_080014d4, DAT_02005830, 0x80)
IS_BIT_SET(fun_080014ec, DAT_02005830, 1)
IS_BIT_SET(fun_08001504, DAT_02005830, 2)

#ifdef NONMATCHING
void fun_0800151c()
{
    DAT_02005ce0 = 0;
    DAT_02005830 = DAT_02005ce0;
}
#else
__attribute__((naked)) void fun_0800151c()
{
    asm("\n\
    ldr        r2,DAT_0800152c\n\
    ldr        r1,DAT_08001530\n\
    mov        r0,#0x0\n\
    strh       r0,[r1,#0x0]\n\
    ldrh       r0,[r1,#0x0]\n\
    strh       r0,[r2,#0x0]\n\
    bx         lr\n\
.space 2\n\
DAT_0800152c:\n\
    .word     DAT_02005830\n\
DAT_08001530:\n\
    .word     DAT_02005ce0\n\
    ");
}
#endif
