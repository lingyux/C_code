//c语言允许从函数返回指针。但是必须声明一个返回指针的函数
//c语言不支持在调用函数时返回局部变量的地址，除非局部变量为static变量
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//要生成和返回随机数的函数
int *getRandom(){
    static int r[10];
    int i;
    //设置种子
    srand((unsigned)time(NULL));
    for(i = 0;i < 10;i++){
        r[i] = rand();
        printf("%d\n",r[i]);
    }
    return r;
}
//调用是上面定义函数的主函数
int main(){
    //一个指向整数的指针
    int *p;
    int i;
    p = getRandom();
    for(i = 0;i < 10;i++){
        printf("*(p + [%d] : %d\n)",i,*(p + i));
    }
    return 0;
}
