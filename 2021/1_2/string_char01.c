//c语言中，字符串实际上使用null字符\0终止的一维字符数组。因此以null结尾的字符串包含了组成字符串的字符
//声明和初始化一个RUNOOB字符串，由于数组的末尾存储了空字符，所以数组的长度要比RUNOOB的字符数多一个
//char site[7] = {'R','U','N','O','O','B','\0'};    or char site[] = "RUNOOB";
#include<stdio.h>
int main(){
    char site[7] = {'R','U','N','O','O','B','\0'};
    printf("%s\n",site);
    return 0;
}

  
