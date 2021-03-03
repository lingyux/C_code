#include <stdio.h>
#pragma pack(4) //设置默认对齐数为4
struct S1
{
	char c1;
	double a;
	char c2;
};
#pragma pack()//取消设置默认的对齐数
#pragma pack(1) //设置默认对齐数为4
struct S2
{
	char c1;
	char c2;
	int a;

};
#pragma pack()
int main()
{
	struct S1 s1 = {0};
	printf("%d\n", sizeof(s1));
	struct S2 s2 = {0};
	printf("%d\n", sizeof(s2));
	return 0;
}