#include <stdio.h>

#define CAT(X,Y) X##Y

int main()
{
	int Class84 = 2019;
	printf("%d\n", Class84);
	printf("%d\n", CAT(Class, 84));
	// printf("%d\n",Class##84);
	// printf("%d\n",Class84);
	return 0;
}