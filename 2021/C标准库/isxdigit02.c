#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[] = "123c@#run[oobe?";

	int i = 0;
	for (i = 0; str[i] != '\0'; ++i)
	{
		/* code */
		if (isxdigit(str[i]))
		{
			printf("%c 是一个十六进制数\n", str[i]);
		}
	}
}