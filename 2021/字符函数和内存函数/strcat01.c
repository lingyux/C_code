#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	// 1.找到目的字符串的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	// 2.追加字符串
	//从'\0'的位置开始追加字符串
	while (*dest++ = *src++)
	{
		;
	}

	return ret;
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = " world";
	my_strcat(arr1, arr2);

	printf("%s\n", arr1);
	return 0;
}