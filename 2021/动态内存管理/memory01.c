#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	// 向内存开辟10个整形的空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		// 打印错误信息
		printf("%s\n", strerror(errno));
	}
	else
	{
		// 正常使用
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	// 当申请的空间不再使用的时候，应该归还空间
	free(p);
	p = NULL;
	return 0;
}