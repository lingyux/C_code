#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() 
{
	int a, b;
	int i, j,count=0;
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j >= i)
		{
			count++;
			printf("%-3d ", i);
			if (count%5 == 0)
				printf("\n");
		}
		
	}
	return 0;
}