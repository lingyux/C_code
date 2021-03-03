#include <stdio.h>
// 位段 - 二进制位 - 后面的数字代表的是相应的比特位
struct S
{
	int a: 2;  //a - 2bit
	int b: 5;
	int c: 10;
	int d: 30;
};
//47 bit

struct C
{
	char a: 3;
	char b: 4;
	char c: 5;
	char d: 4;
};
int main()
{
	struct S s;
	struct C c = {0};
	c.a = 10;
	c.b = 20;
	c.c = 3;
	c.d = 4;
	printf("%d\n", c.a);
	printf("%d\n", c.b);
	printf("%d\n", c.c);
	printf("%d\n", c.d);
	// printf("%d\n", sizeof(s));//8 Byte
	// printf("%d\n", sizeof(c));
	return 0;
}