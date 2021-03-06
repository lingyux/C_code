#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}


int is_left_move(char* str1, char* str2)
{
	//1.在str1字符串中追加一个str1字符串
	// strcat 不能直接用来复制一个字符串
	// strncat
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	strncat(str1, str1, len1);
	if (len1 != len2)
	{
		return 0;
	}
	//2.判断str2指向的字符串是否是str1指向的字符串的子串
	// strstr - 找子字符串
	char* ret = strstr(str1, str2);
	if (*ret == NULL)
		return 0;
	else
		return 1;
}