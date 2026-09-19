extern unsigned short DAT_02007f60;
extern unsigned short DAT_02005cf8;

void fun_08004670(unsigned short param_1)
{
    DAT_02007f60 = param_1;
    return;
}

unsigned short int fun_0800467c()
{
    return DAT_02005cf8;
}
