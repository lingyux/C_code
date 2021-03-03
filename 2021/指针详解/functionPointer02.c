#include <stdio.h>

int add (int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	//指针数组
	int* arr[5];

	//add/sub/mul/div类型相同可以用数组存储
	int(*pa)(int, int) = add;
	int (*parr[4])(int , int) = {add, sub, mul, div}; //函数指针数组

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d \n", parr[i](2, 3));
	}

	return 0;
}