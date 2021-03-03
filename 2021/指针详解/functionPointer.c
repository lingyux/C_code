#include <stdio.h>

void print(char* str)
{
	printf("%s \n", str);
}

int main()
{
	void (*p)(char*) = print;
	(*p)("hello,world");

	return 0;
}