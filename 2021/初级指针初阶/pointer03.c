#include<stdio.h>
int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[10]);
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		printf("%d", *p);
		p = p + 1;
	}
}
