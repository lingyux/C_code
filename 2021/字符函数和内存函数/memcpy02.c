#include <stdio.h>
#include <string.h>
#include <assert.h>
struct S
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	char* pd = (char*)dest;
	char* ps = (char*)src;
	while (num--)
	{
		*pd = *ps;
		ps++;
		pd++;
	}
	return ret;
}


int main()
{
	int i = 0;
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[5] = {0};
	// struct S arr3[] = {{"张三", 20}, {"李四", 30}};
	// struct S arr4[3] = {0};
	my_memcpy(arr2, arr1, sizeof(arr1));

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	// printf("%d\n", arr1);
	return 0;
}