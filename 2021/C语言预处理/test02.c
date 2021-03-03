#include <stdio.h>

#define PRINT(x) printf("the value of  "#x" is %d\n",x)

int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	// printf("the value of ""a""is %d\n",a);
	PRINT(b);

	return 0;
}