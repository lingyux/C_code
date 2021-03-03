#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	// .表示当前路径
	// ..表示上一级路径
	// 打开文件test.txt
	FILE* pf = fopen("test.txt", "w"); //绝对路径的写法
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// 打开成功

	// 写文件
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);


	// 关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}