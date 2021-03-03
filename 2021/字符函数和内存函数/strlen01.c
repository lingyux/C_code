#include <stdio.h>
#include <string.h>
#include <assert.h>

// 1.计数器的写法
// 2.递归
// 3.指针-指针
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')//while(*str)
	{
		count++;
		str++;
	}
	return count;
}


int main()
{
	int len = my_strlen("abcdef");
	// char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	// int len = my_strlen(arr);

	printf("%d\n", len);
	return 0;
}

