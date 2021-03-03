// 全是错误
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	// int*p = (int*)malloc(40);
	// // 一定要进行返回值的判断
	// int i = 0;
	// for (i = 0; i < 10; i++)
	// 	*(p + i) = i;
	// free(p);
	// p = NULL;
	int* p = (int*)malloc(5 * sizeof(int));
	if (p == NULL)
	{
		return 0;
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
	}
	int a = 10;
	int* p = &a;
	*p = 20;

	free(p);
	p = NULL;
	return 0;
}