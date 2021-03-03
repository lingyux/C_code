// 全是错误
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <windows.h>
int main()
{
	// int* p = (int*)malloc(40);
	// if (p == NULL)
	// 	return 0;
	// int i = 0;
	// for (i = 0; i < 10; i++)
	// {
	// 	*p++ = i; //p是先使用后++
	// }
	// // 回收空间
	// free(p);
	// p = NULL;//因为p变化了指向的不再是p的其实位置



	// return 0;

	// int* p = (int*)malloc(40);
	// if (p == NULL)
	// 	return 0;
	// free(p);
	// p = NULL;//可以避免多次释放
	// free(p);
	while (1)
	{
		malloc(1);
		Sleep(1000);
	}
	return 0;
}