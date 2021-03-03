#include<stdio.h>
#include<string.h>

union Data{
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str,"C Programming");
    
    printf("data.i : %d\n",data.i);
    printf("data.f : %f\n",data.f);
    printf("data.str : %s\n",data.str);
    
    return 0;
}
//str变量的值占据了内存位置，所以str可以正常显示，但是共用体i和f的值有损坏
