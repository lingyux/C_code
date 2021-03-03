#include <stdio.h>
#include <stdlib.h>

int array(int n)
{
	int i, j, no, num, max;
	int *mtrx;
	if (n % 2 == 0) /*n是偶数，则加1使其变为奇数*/
	{
		n = n + 1;
	}
	max = n * n;
	mtrx = (int *)malloc(max + max); /*为魔方阵分配内存*/
	mtrx[n / 2] = 1;                 /* 将1存入数组*/
	i = 0;                           /*自然数1所在行*/
	j = n / 2;                       /*自然数1所在列*/
	/*从2开始确定每个数的存放位置*/
	for (num = 2; num <= max; num++)
	{
		i = i - 1;
		j = j + 1;
		if ((num - 1) % n == 0) /*当前数是n的倍数*/
		{
			i = i + 2;
			j = j - 1;
		}
		if (i < 0) /*当前数在第0行*/
		{
			i = n - 1;
		}
		if (j > n - 1) /*当前数在最后一列，即n-1列*/
		{
			j = 0;
		}
		no = i * n + j; /*找到当前数在数组中的存放位置*/
		mtrx[no] = num;
	}
	/*打印生成的魔方阵*/
	printf("%d * %d magiccube :", n, n);
	no = 0;
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%3d", mtrx[no]);
			no++;
		}
	}
	printf("\n");
	free(mtrx);
	return 0;
}

int main()
{
	int n;
	printf("please input n:\n");
	scanf("%d", &n);
	array(n); /*调用array函数*/
	return 0;
}
