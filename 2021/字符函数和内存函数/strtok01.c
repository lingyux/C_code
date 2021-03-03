#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "lingyux@outlook.com";
	char* p = "@.";

	char buf[1024] = {0};
	strcpy(buf, arr);

	//切管buf中的字符串
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}
	// char* ret = strtok(arr, p);
	// printf("%s\n", ret);
	// ret = strtok(NULL, p);
	// printf("%s\n", ret);
	// ret = strtok(NULL, p);
	// printf("%s\n", ret);

	return 0;
}