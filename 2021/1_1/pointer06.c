//指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。
//一个指向指针的指针变量必须如下声明，即在变量名前放置两个星号。
#include<stdio.h>
int main(){
    int v;
    int *Pt1;
    int **Pt2;
     v = 100;
     //获取 v 的地址
     Pt1 = &v;
     //使用运算符&获取Pt1的地址
     Pt2 = &Pt1;
     //使用pptr获取值
     printf("var = %d\n",v);
     printf("Pt1 = %p\n",Pt1);
     printf("*Pt1 = %d\n",*Pt1);
     printf("Pt2 = %d\n",Pt2);
     printf("**Pt2 = %d\n",**Pt2);
     return 0;
}
