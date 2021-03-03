#include <stdio.h>
#include <string.h>
#include <assert.h>



// int main()
// {
// 	char* p1 = "zbcdef";
// 	char* p2 = "sqwer";
// 	int ret  = (strcmp(p1, p2));

// 	printf("%d\n", ret);

// 	return 0;
// }
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//比较的过程
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
			// 相等的情况
		}
		str1++;
		str2++;
	}

	if (*str1 > *str2)
	{
		return 1;
	}
	else
		return -1;
}

int main()
{
	char* p1 = "abcdef";
	char* p2 = "abcd";

	int ret = my_strcmp(p1, p2);
	printf("ret=%d\n", ret);

	return 0;
}