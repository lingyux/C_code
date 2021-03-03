

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	// 就是在使用开辟的malloc的空间
	// 假设20个字节的空间不能满足使用要求
	int* ptr = (int*)realloc(p, 40);
	if (ptr == NULL)
		printf("%s\n", strerror(errno));
	else
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (int i = 0; i < 10; ++i)
		{
			printf("%d ", *(p + i));
		}
	}

	free(p);
	p = NULL;

	return 0;
}