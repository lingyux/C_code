#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	// .表示当前路径
	// ..表示上一级路径
	// 打开文件test.txt
	FILE* pfRead = fopen("test.txt", "r"); //绝对路径的写法
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// 打开成功

	// 写文件
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));

	// 关闭文件
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}