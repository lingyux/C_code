#include <stdio.h>
#include <stddef.h>
struct S
{
	char c;
	int i;
	double d;
};

int main()
{
	struct S s;
	printf("%d\n", offsetof(struct S, c));//计算成员相对于结构体的偏移量
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
	return 0;
}