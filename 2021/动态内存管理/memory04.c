

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


int main()
{
	int* p = realloc(NULL, 40);
	// 开辟新空间，相当于malloc

	return 0;
}