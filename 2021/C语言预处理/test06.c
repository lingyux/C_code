#include <stdio.h>
#include <stdlib.h>
#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));//相当于开辟了一个10个空间的int数组
	int* pf = MALLOC(10, int);
	int i = 0;
	for (i = 0; i < 10; i++)
		pf[i] = i;
	for (i = 0; i < 10; i++)
		printf("%d ", pf[i]);
	printf("\n");
	return 0;
}

// #define SIZEOF(type) sizeof(type)
// int main()
// {
// 	int ret = SIZEOF(int);

// 	printf("%d\n", ret);
// 	return 0;
// }