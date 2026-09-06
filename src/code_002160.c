void fun_08001aa8();
int fun_080456c8(const char*, int*);
void fun_08000584();
void fun_08001b9c();

extern int DAT_02005200;

void fun_08002160()
{
    int iVar1;

    fun_08001aa8();
    iVar1 = fun_080456c8("SWD", &DAT_02005200);
    if (iVar1 != 0) {
        fun_08000584();
        fun_08001b9c();
    }
}
