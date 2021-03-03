//c语言允许传递指针给函数，只需要简单的声明函数参数为指针类型即可
//声明一个无符号的long类型的指针
#include<stdio.h>
#include<time.h>
void getSeconds(unsigned long *par);
int main(){
    unsigned long sec;
    getSeconds(&sec);
    //输出实际值
    printf("Number of seconds: %d\n",sec);
    return 0;
}
void getSeconds(unsigned long *par){
    //获取当前的秒数
    *par = time(NULL);
    return;
}
