/*函数指针时指向函数的指针变量。
通常我们所说的指针变量指向的是一个整型，字符型或数组等变量，而函数指针指向的是函数。
函数指针可以像一般函数一样，用于调用函数、传递参数
*/
//声明方法
//typedef int (*fun_ptr)(int,int);声明一个指向同样参数、返回值的函数指针类型
//以下实例声明了函数指针变量p，指向函数max
#include<stdio.h>
int max(int x,int y){
    return x > y ? x : y;
}
int main(){
    //*p是函数指针
    int (*p)(int,int) = & max;
    int a,b,c,d;
    printf("请输入三个数字：\n");
    scanf("%d %d %d",&a,&b,&c);
    //与直接调用函数等价,d = max(max(a,b),c)
    d = p(p(a,b),c);
    printf("最大的数字是： %d\n",d);
    return 0;
}
