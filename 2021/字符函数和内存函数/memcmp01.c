#include <stdio.h>
#include <string.h>


int main()
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 5, 3, 4};
	int ret = memcmp(arr1, arr2, sizeof(arr1));
	printf("%d \n", ret);

	return 0;
}