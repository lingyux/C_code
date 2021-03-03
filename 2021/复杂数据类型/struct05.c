#include <stdio.h>

struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S* ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
// 传递的值，需要开辟内存空间
void Print1(struct S tmp)
{
	printf("%d %c %.2lf\n", tmp.a, tmp.c, tmp.d);
}
// 传递的是地址，不需要开辟内存空间，可以节省硬件资源
void Print2(const struct S* ps)//const 可以避免指针变量被更改
{
	printf("%d %c %.2lf\n", ps->a, ps->c, ps->d);
}
int main()
{
	struct S s = {0};
	Init(&s);
	// s.a = 100;
	// s.c = 'c';
	// s.d = 3.14;

	Print1(s);
	Print2(&s);
	return 0;
}