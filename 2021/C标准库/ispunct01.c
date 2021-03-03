#include <stdio.h>
#include <ctype.h>

int main()
{
	int var1 = 'k';
	int var2 = '8';
	int var3 = '/';
	int var4 = ' ';

	if (ispunct(var1))
		printf("var1 =|%c| is a punctuation\n", var1);
	else
		printf("var1 = |%c| is not a punctuation\n", var1);
	if (ispunct(var2))
		printf("var2 =|%c| is a punctuation\n", var2);
	else
		printf("var2 = |%c| is not a punctuation\n", var2);
	if (ispunct(var3))
		printf("var3 =|%c| is a punctuation\n", var3);
	else
		printf("var3 = |%c| is not a punctuation\n", var3);
	if (ispunct(var4))
		printf("var4 =|%c| is a punctuation\n", var4);
	else
		printf("var4 = |%c| is not a punctuation\n", var4);

	return 0;
}