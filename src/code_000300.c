#include "functions.h"
#include "gba.h"

void fun_08000300()
{
    DmaFill32(3, 0, EWRAM_START, 0x40000);
    DmaFill32(3, 0, IWRAM_START, 0x7E00);
    fun_08002b34();
    fun_08002b94();
    REG_IE = 0x2001;
    REG_DISPSTAT = 8;
    REG_IME = 1;
    REG_WAITCNT = 0x4014;
    fun_0800260c();
    fun_08002844();
    fun_08002c30();
    fun_08002c44();
    fun_080008f0();
}

void fun_0800038c()
{
    fun_080004ac(0x0, 0x0);
    fun_08001424();
    fun_080014bc();
    fun_080014d4();
    fun_08001454();
    fun_0800146c();
    fun_080014ec();
    fun_08001504();
    fun_080017ac();
    fun_080018e4(0);
    fun_08001a14(0, 1);
    fun_080003e0(0, 0, 0);
    fun_080004dc(0, 0, 0x0);
    fun_080024ac();
}
