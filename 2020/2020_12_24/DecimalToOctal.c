#define _CRT_SECURE_NO_WARNINGS 1//10to8
#include<stdio.h>
#include<math.h>
int convertDecimalToOctal(int decimalNumber);
int main()
{
	int decimalNumber;
	printf("请输入一个十进制数：\n");
	scanf("%d", &decimalNumber);
	printf("十进制数 %d 转换为八进制为 %d", decimalNumber, convertDecimalToOctal(decimalNumber));
	return 0;
}

int convertDecimalToOctal(int decimalNumber)
{
	int octalNumber = 0, i = 1;
	while (decimalNumber != 0)
	{
		octalNumber += (decimalNumber % 8) * i;
		decimalNumber /= 8;
		i *= 10;
	}
	return octalNumber;
}