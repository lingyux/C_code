#include <stdio.h>
#define DEBUG 0
int main()
{
// // #if defined(DEBUG)
// // 	printf("hehe\n");
// // #endif
// // #ifdef DEBUG
// // 	printf("hehe\n");
// // #endif
// // 	return 0;
// 	相反情况
// #if !defined(DEBUG)
// 	printf("hehe\n");
// #endif
// 	return 0;
#ifndef DEBUG
	printf("hehe\n");
#endif
	return 0;
}
// #define DEBUG


// int main()
// {
// 	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// 	int i = 0;
// 	for (i = 0; i < 10; i++)
// 	{
// 		arr[i] = 0;
// #ifdef DEBUG//如果DEBUG没有定义，则下述代码不参与编译
// 		printf("%d ", arr[i]);
// #endif
// 	}
// 	printf("\n");

// 	return 0;
// }