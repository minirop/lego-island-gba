#include "gba.h"

void fun_080045f0(void* param_1)
{
    DmaCopy16(3, param_1, OBJ_PLTT, OBJ_PLTT_SIZE);
}

void fun_0800460c(void* param_1, u16 param_2)
{
    DmaCopy16(3, param_1, OBJ_PLTT + param_2 * 0x20, 0x20);
}

void fun_08004630(void* param_1)
{
    DmaCopy16(3, OBJ_PLTT, param_1, OBJ_PLTT_SIZE);
}

void fun_0800464c(void* param_1, u16 param_2)
{
    DmaCopy16(3, OBJ_PLTT + param_2 * 0x20, param_1, 0x20);
}
