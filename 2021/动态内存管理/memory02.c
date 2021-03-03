#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("空间开辟失败%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d\n", *(p + i));
		}
	}

	// 释放空间
	free(p);//释放动态内存空间
	p = NULL;

	return 0;
}