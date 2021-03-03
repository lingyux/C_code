#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "hello bit";

	strncpy(arr1, arr2, 4);

	printf("%s\n", arr1);


	return 0;
}