#include <stdio.h>


enum Sex
{
	MALE = 2,
	FEMALE = 4,
	SECRET = 8
};

enum Color
{
	// 枚举的可能取值
	Red,
	Green,//枚举常量
	Blue
};
int main()
{
	enum Sex s = MALE;
	s = FEMALE;
	enum Color c = Blue;
	printf("%d %d %d\n", Red, Green, Blue);
	return 0;
}