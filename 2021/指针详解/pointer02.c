#include<stdio.h>

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	int (*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", (*pa)[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa + i));
	}

	return 0;
}