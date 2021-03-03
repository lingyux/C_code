#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);

	printf("%s\n", arr1);

	return 0;
}