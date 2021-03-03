#include <stdio.h>
#define MAX(X,Y) ((X)>(Y)?(X):(Y))
int Max(int x, int y)
{
	return (x > y ? x : y);
}

float Max2(float x, float y)
{
	return (x > y ? x : y);
}

int main()
{
	int a = 10;
	int b = 20;
	float c = 3.0f;
	float d = 4.0f;

	int max = MAX(a, b);
	printf("max = %d\n", max);
	max = Max(a, b);
	printf("max = %d\n", max);

	float max2 = MAX(c, d);
	printf("max = %.2f\n", max2);
	max2 = Max2(c, d);
	printf("max = %.2f\n", max2);

	return 0;
}