#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
	printf("MAX = %d\n", MAX);
#undef MAX
	printf("MAX = %d\n", MAX);

	return 0;
}