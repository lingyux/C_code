#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main() {

	int num;
	int again = 1;
	printf("如果小于50 程序将中止。\n");
	while (again) {
		printf("\n请输入数字：");
		scanf("%d", &num);
		printf("该数字平方为 %d \n", SQ(num));
		if (num >= 50)
			again = TRUE;
		else
			again = FALSE;
	}
	return 0;
}
