//定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值。
#include<stdio.h>
int main(){
	int var = 20;	//实际变量的声明
	int *ip;	//指针变量的声明
	ip = &var;	//在指针中存储var的地址
	printf("var 变量的地址：%p\n",&var);
	//在指针变量中存储的地址
	printf("ip 变量存储的地址： %p\n",ip);
	//使用指针访问值
	printf("ip 变量的值：%d\n",*ip);
	return 0;
	
}
