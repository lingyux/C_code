#include <stdio.h>
#include <string.h>
struct S
{
	char name[20];
	int age;
};
int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[5] = {0};
	struct S arr3[] = {{"张三", 20}, {"李四", 30}};
	struct S arr4[3] = {0};
	memcpy(arr4, arr3, sizeof(arr3));

	// printf("%d\n", arr1);
	return 0;
}