#include <stdio.h>
#include <string.h>


int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	printf("%s\n", arr);

	int arr1[10] = {0};
	memset(arr1, 1, 40);
	return 0;
}