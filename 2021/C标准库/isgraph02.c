#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
	int i;
	printf("C 语言中所有的图形字符：\n");

	for (int i = 0; i <= 127; ++i)
	{
		if (isgraph(i) != 0)
		{
			/* code */
			printf("%c ", i);
		}
	}
	return 0;
}