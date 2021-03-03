//c语言不允许返回一个完整的数组作为函数的参数，但是可以通过指定一个不带索引的数组名来返回一个指向数组的指针
//c语言不支持在函数外返回局部变量的地址，除非局部变量定义为static
#include<stdio.h>
#include<math.h>
#include<time.h>
int *getRandom(){
	static int r[10];
	int i;
	srand((unsigned)time(NULL));
	for(i = 0;i < 10;i++){
		r[i] = rand();
		printf("r[%d] = %d\n",i,r[i]);
	}
	return r;
}
int main(){
	int *p;
	int i;
	p = getRandom();
	for(i = 0;i < 10;i++){
		printf("*(p + %d) : %d\n",i,*(p + i));
	}
	return 0;
}
