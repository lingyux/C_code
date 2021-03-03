#include <stdio.h>
#include <string.h>

int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	int ret = strcmp(p1, p2);
	printf("%d\n", ret);

	int ret0 = strncmp(p1, p2, 3);
	printf("%d\n", ret0);

	return 0;
}