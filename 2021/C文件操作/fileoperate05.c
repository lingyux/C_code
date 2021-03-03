#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>



// int main()
// {
// 	char buf[1024] = {0};
// 	FILE* pf = fopen("tet.txt", "w");
// 	if (pf == NULL)
// 	{
// 		printf("%s\n", strerror(errno));
// 		return 0;
// 	}
// 	char str[] = "lingyux\n";
// 	fputs(str, pf);
// 	fputs("hello", pf);
// 	fclose(pf);
// 	pf = NULL;

// 	return 0;
// }

// //fgets()

// int main()
// {
// 	char buf[1024] = {0};
// 	FILE* pf = fopen("test.txt", "r");
// 	if (pf == NULL)
// 	{
// 		printf("%s\n", strerror(errno));
// 		return 0;
// 	}

// 	fgets(buf, 1024, pf);
// 	// printf("%s\n", buf);
// 	puts(buf);
// 	fgets(buf, 1024, pf);
// 	// printf("%s\n", buf);
// 	puts(buf);
// 	fclose(pf);
// 	pf = NULL;

// 	return 0;
// }


// 从键盘读取文本
int main()
{
	char buf[1024] = {0};
	fgets(buf, 1024, stdin); //从标准输入读取
	fputs(buf, stdout); //输出到标准输出

	gets(buf);
	puts(buf);
	return 0;
}