#include "defines.h"
#include "variables.h"

IS_BIT_SET(fun_0800132c, gNewKeys, 8)
IS_BIT_SET(fun_08001344, gNewKeys, 4)
IS_BIT_SET(fun_0800135c, gNewKeys, 0x20)
IS_BIT_SET(fun_08001374, gNewKeys, 0x10)
IS_BIT_SET(fun_0800138c, gNewKeys, 0x200)
IS_BIT_SET(fun_080013a8, gNewKeys, 0x100)
IS_BIT_SET(fun_080013c4, gNewKeys, 0x40)
IS_BIT_SET(fun_080013dc, gNewKeys, 0x80)
IS_BIT_SET(fun_080013f4, gNewKeys, 1)
IS_BIT_SET(fun_0800140c, gNewKeys, 2)

IS_BIT_SET(fun_08001424, gHeldKeys, 8)
IS_BIT_SET(fun_0800143c, gHeldKeys, 4)
IS_BIT_SET(fun_08001454, gHeldKeys, 0x20)
IS_BIT_SET(fun_0800146c, gHeldKeys, 0x10)
IS_BIT_SET(fun_08001484, gHeldKeys, 0x200)
IS_BIT_SET(fun_080014a0, gHeldKeys, 0x100)
IS_BIT_SET(fun_080014bc, gHeldKeys, 0x40)
IS_BIT_SET(fun_080014d4, gHeldKeys, 0x80)
IS_BIT_SET(fun_080014ec, gHeldKeys, 1)
IS_BIT_SET(fun_08001504, gHeldKeys, 2)

void fun_0800151c()
{
    u16* r2 = &gHeldKeys;
    volatile u16* r1 = &gNewKeys;
    *r1 = 0;
    *r2 = *r1;
}
