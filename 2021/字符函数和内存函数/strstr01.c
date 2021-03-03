#include <stdio.h>
#include <string.h>
#include <assert.h>


char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* p1 = NULL;
	char* p2 = NULL;
	char* cur = (char*)str1;
	if (*str2 == '\0')
		return (char*)str1;
	while (*cur)
	{
		p1 = cur;
		p2 = (char*)str2;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return cur;
		}
		cur++;

	}
	return NULL;
	// 找不到子串
}



int main()
{
	char* p1 = "abbbcdef";
	char* p2 = "bbc";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("不存在这个字符串\n");
	}
	else
	{
		printf("%s\n", ret);
	}

	return 0;
}