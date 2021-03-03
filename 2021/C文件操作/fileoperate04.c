#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	char* ch = fgets(stdin);
	fputs(ch, stdout);

	return 0;
}