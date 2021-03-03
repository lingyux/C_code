#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	// 错误码 - 错误信息
	// 0 - No error
	// 1 - Operation not permitted
	// 2 - No such file or directory
	// errno是一个全局的错误码变量
	// 当C语言的库函数在执行的过程中，发生了错误，就会把对应的错误码赋值到error中
	// char* str = strerror(errno);
	// printf("%s\n", str);

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file successs\n");
	}
	return 0;
}