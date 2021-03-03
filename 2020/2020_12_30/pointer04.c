//在程序中用指针代替数组，变量指针可以递增，而数组不能递增，数组可以看成一个指针常量。
#include<stdio.h>
const int MAX = 3;
int main(){
	int var[] = {10,100,200};
	int i,*ptr;
	//指针中的数组地址
	ptr = var;
	for(i = 0;i< MAX;i++){
		printf("存储地址：var[%d] = %p\n",i,ptr);
		printf("存储值：var[%d] = %d\n",i,*ptr);
		//指向下一个位置
		ptr++;
	}
	return 0;
}
