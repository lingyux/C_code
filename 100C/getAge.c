#include <stdio.h>

int age(int n)
{

	int x;
	if (n == 1)
		x = 10;
	else
		x = age(n - 1) + 2;

	return x;
}

int main()
{
	int n;
	printf("请输入n值：\n");
	scanf("%d", &n);
	printf("第%d个人的年龄为%d\n", n, age(n));
	return 0;
}