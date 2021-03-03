#include <stdio.h>

int main()
{
	int arr[3][3] = {{1, 2, 3}, {4, 5, 5}, {7, 8, 9}};
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = find_num(arr, k, &x, &y);

	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标为:%d%d\n", x, y);
	}
	else
	{
		printf("找不到\n");
		printf("下标为:%d %d\n", x, y);
	}
	return 0;
}

// int find_num(int arr[3][3], int k, int row, int col)
// {
// 	int x = 0;
// 	int y = col - 1;
// 	while (x <= row - 1 && y >= 0)
// 	{
// 		if (arr[x][y] > k)
// 		{
// 			y--;
// 		}
// 		else if (arr[x][y] < k)
// 			x++;
// 		else
// 		{
// 			return 1;
// 		}
// 	}
// 	return 0;
// }

int find_num(int arr[3][3], int k, int* row, int* col)
{
	int x = 0;
	int y = *col - 1;
	while (x <= *row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
			x++;
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	*row = -1;
	*col = -1;
	return 0;
}