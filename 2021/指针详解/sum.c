#include <stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int ret = 0;
	int i = 0;
	scanf("%d%d", &a, &n);
	ret = a;
	for (i = 0; i < n; i++)
	{
		sum += ret;
		ret = ret * 10 + a;
	}

	printf("%d \n", sum);

	return 0;
}