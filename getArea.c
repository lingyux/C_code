//#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int get_option();
double pi = 3.14;

int main() {
	int done = 0;
	int option;
	int a, b, c, w, l, r;
	double p;
	double area;
	while (!done)
	{
		option = get_option();
		if (option == 4)
		{
			done = 1;
		}
		else
		{
			while (1)
			{
				switch (option)
				{
				case 1:
					printf("请输入圆的半径：\n");
					scanf("%d", &r);
					area = pi * r * r;
					printf("圆的面积为：%lf\n", area);
					break;
				case 2:
					printf("请输入矩形的长和宽：\n");
					scanf("%d%d", &l, &w);
					area = l * w;
					printf("矩形的面积为：%lf\n", area);
					break;
				case 3:
					printf("请输入三角形的三条边：\n");
					while (1)
					{
						scanf("%d%d%d", &a, &b, &c);
						if (a + b <= c || a + c <= b || b + c <= a)
						{
							printf("你输入三条边不能构成三角形，请重新输入\n");
						}
						else
							break;
					}
					p = (a + b + c) / 2;
					area = sqrt(p * (p - a) * (p - b) * (p - c));
					printf("三角形的面积为：%lf", area);
					break;
				}
				break;
			}
		}
	}
	return 0;
}
int get_option()
{
	int option;
	do
	{
		printf("\n *************");
		printf("\n *   1.cir   *");
		printf("\n *   2.rec   *");
		printf("\n *   3.ang   *\n");

		printf("请输入你需要的功能\n");
		scanf("%d", &option);
		if (option < 1 || option > 3)
		{
			printf("你输入的数字有误，请重新输入\n");
		}
	} while (option < 1 || option > 3);
	return option;
}

