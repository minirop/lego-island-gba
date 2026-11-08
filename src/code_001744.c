#include "functions.h"
#include "variables.h"

u16 fun_08001744()
{
    return fun_0803dda4();
}

void fun_08001754(s32 param_1, u16 param_2)
{
    fun_0803da44(param_1, param_2);
}

u16 fun_08001764()
{
    return fun_0803de40();
}

// inlined in fun_080015b8
s16 fun_08001774(u16 param_1)
{
    u16 i;

    for (i = 0; i < 0x98; i += 1)
    {
        if (param_1 == DAT_0875678c[i][0])
        {
            return DAT_0875678c[i][1];
        }
    }

    return -1;
}
