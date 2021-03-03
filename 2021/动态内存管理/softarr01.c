#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


// struct S
// {
// 	int a;
// 	int arr[0];//未知大小 - 柔性数组成员 - 数组是可变的
// };
// int main()
// {
// 	struct S s;
// 	printf("%d\n", sizeof(s));//柔性数组计算大小不包含最后柔性数组的大小
// 	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
// 	ps->a = 100;
// 	int i = 0;
// 	for (i = 0; i < 5; i++)
// 	{
// 		ps->arr[i] = i;
// 	}
// 	struct S* ptr = realloc(ps, 44);
// 	if (ptr != NULL)
// 		ps = ptr;
// 	for (i = 5; i < 10; i++)
// 		ps->arr[i] = i;
// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("%d ", ps->arr[i]);
// 	}
// 	printf("\n");
// 	free(ps);
// 	ps = NULL;
// 	return 0;
// }
struct S
{
	int n;
	int* arr;
};



int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(sizeof(int) * 5);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
	// 调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
		ps->arr = ptr;
	for (i = 5; i < 10; i++)
		ps->arr[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", ps->arr[i]);
	printf("\n");
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}


