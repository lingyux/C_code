#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//计算i的位数
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		// 计算i的每一位
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (i == sum)
			printf("%d\n", i);
	}
	return 0;
}