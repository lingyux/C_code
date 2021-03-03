//插入排序
/*
插入排序（英语：Insertion Sort）是一种简单直观的排序算法。它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。插入排序在实现上，通常采用in-place排序（即只需用到 {\displaystyle O(1)} {\displaystyle O(1)}的额外空间的排序），因而在从后向前扫描过程中，需要反复把已排序元素逐步向后
挪位，为最新元素提供插入空间。
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void insertion_sort(int arr[], int len)
{
	int i, j, temp;
	for (i = 1; i < len; i++)
	{
		temp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}
int main()
{
	int arr[] = { 22,34,3,32,82,55,89,50,37,5,64,35,9,70 };
	int len = (int)sizeof(arr) / sizeof(*arr);
	insertion_sort(arr, len);
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}