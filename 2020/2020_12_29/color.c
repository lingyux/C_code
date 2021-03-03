//枚举在switch中的使用
#include<stdio.h>
#include<stdlib.h>
int main(){
	enum color {red = 1,green,blue};
	enum color favourite_color;
	printf("请输入你喜欢的颜色：(1.red 2.green 3.blue):\n");
	scanf("%u",&favourite_color);
	switch(favourite_color)
	{
		case red:	printf("你喜欢的颜色是红色\n");	break;
		case blue:	printf("你喜欢的颜色是蓝色\n");	break;
		case green:	printf("你喜欢的颜色是绿色\n");	break;
		default:	printf("你没有选择喜欢的颜色\n");	break;
	}
	return 0;
}
