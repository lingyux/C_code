#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() 
{
	int a, b, c, m, n;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		c = b;
		b = a;
		a = c;
	}
	m = a * b;
	n = a % b;
	while (n != 0) {
		a = b;
		b = n;
		n = a % b;
	}
	printf("%d %d", b, m / b);
	return 0;
}