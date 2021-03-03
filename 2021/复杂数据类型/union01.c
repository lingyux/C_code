
#include <stdio.h>

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	printf("%p\n", &u.c);
	printf("%p\n", &u.i);
	printf("%p\n", &u);


	return 0;
}