#include <stdio.h>
#include <string.h>



// int main()
// {
// 	int a = 10;
// 	int b = a + 1;
// 	int b = ++a;//a带有副作用，因为对b赋值的时候a也改变


// 	return 0;
// }

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a++, b++);
	// 宏的参数是直接替换然后在计算
	// int max=((a++)>(b++)?(a++):(b++))

	printf("%d\n", max);
	printf("%d %d\n", a, b );
	// max=12 a=11 b=13
	return 0;
}