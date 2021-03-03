//位域的使用：
/*位域变量名.位域名
 * 位域变量名->位域名;
 */
#include<stdio.h>
#include<string.h>
int main(){
    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    }bit,*pbit;
    bit.a = 1;   /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b = 7;
    bit.c = 15;
    printf("%d %d %d\n",bit.a,bit.b,bit.c); /* 以整型量格式输出三个域的内容 */
    pbit = &bit;    /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a = 0;    /*使用指针给位域a重新赋值，赋值为0*/
    pbit->b &= 3;   /*复合运算符“&=”相当于：pbit->b=pbit->b&3,位域b原有的值为7,与3按位运算的结果为3*/
    pbit->c|=1;/*复合运算符“|=”，相当于pbit->c=pbit->c|1,结果为15*/
    printf("%d %d %d\n",pbit->a,pbit->b,pbit->c);
    return 0;
}
