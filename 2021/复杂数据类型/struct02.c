#include <stdio.h>
struct T
{
	double weight;
	short age;
};
struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];
};

int main()
{
	struct S s1 = {'c', {55.6, 30}, 100, 3.14, "hello world"}; //结构体的初始化
	printf("%c %.2lf %d %d %.2lf %s\n", s1.c, s1.st.weight, s1.st.age, s1.a, s1.d, s1.arr);
	return 0;
}