#include <stdio.h>
#include <ctype.h>

int main()
{
	char c = '5';
	int result;

	//传入字符
	result = isxdigit(c);//result返回的结果为非0
	printf("%c 传入到 isxdigit() 函数结果为 %d\n", c, isxdigit(c) );

	//非16进制树作为参数
	c = 'M';

	result = isxdigit(c);//result 为0

	printf("%c 传入到 isxdigit() 函数的结果为 %d\n", c, isxdigit(c) );

	return 0;
}