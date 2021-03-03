#include<stdio.h>
int main()
{
    int a = 0x11223344;
    int* pa = &a;
    char* pc = &a;  //有警告
    printf("%p\n",pa);
    printf("%p\n",pc);
    return 0;
}
