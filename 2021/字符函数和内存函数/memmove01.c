#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	char* pd = (char*)dest;
	char* ps = (char*)src;
	if (dest < src)
	{
		// 从前向后
		while (count--)
		{
			*pd = *ps;
			++pd;
			++ps;
		}
	}
	else
	{
		// 从后向前
		while (count--)
		{
			*(pd + count) = *(ps + count);
		}
	}
	return ret;
}


int main()
{
	int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// memmove(arr1 + 2, arr1, 20);
	// 第一个参数为目的地地址
	// 第二个参数为源地址
	// 第三个参数为需要拷贝的字节数
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("%d ", arr1[i]);

	return 0;
}
