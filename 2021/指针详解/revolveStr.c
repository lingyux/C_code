#include <stdio.h>
#include <assert.h>
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s \n", arr );
	return 0;
}

void left_move(char* arr, int k) //char arr[]
{
	assert(arr);
	// int i = 0;
	int len = strlen(arr);
	assert(k <= len);
	// for (i = 0; i < k; i++)
	// {
	// 	char tmp = *arr;
	// 	//旋转一个字符
	// 	int j = 0;
	// 	for (j = 0; j < len - 1; j++)
	// 	{
	// 		*(arr + j) = *(arr + j + 1);
	// 	}
	// 	*(arr + len - 1) = tmp;
	// }
	reverse(arr, arr + k - 1); //逆序左边
	reverse(arr + k, arr + len - 1); //逆序右边
	reverse(arr, arr + len - 1); //逆序整体
}
//逆序字符串函数
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}