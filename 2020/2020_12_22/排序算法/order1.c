//冒泡排序
/*
冒泡排序（英语：Bubble Sort）是一种简单的排序算法。它重复地走访过要排序的数列，一次比较两个元素，如果他们的顺序（如从大到小、首字母从A到Z）错误就把他们交换过来。
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int arr[], int len)
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	
}
int main()
{
	int arr[] = { 22,34,3,32,82,55,89,50,37,5,64,35,9,70 };
	int len = (int)sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}