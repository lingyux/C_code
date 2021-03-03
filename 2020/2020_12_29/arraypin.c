//使用数组名作为常量指针是合法的，反之亦然，因此,*(balance + 4) 是一种访问balance[4]的合法方式。令 *p = balance 之后，就可以用*p,*(p+1)等来访问数组元素。
#include<stdio.h>
int main(){
	double balance[5] = {1000.0,2.0,3.4,17.0,50.0};
	double *p;
	int i;
	p = balance;
	printf("使用指针的数组值：\n");
	for(i = 0;i < 5;i++){
		printf("*(p + %d) : %f\n",i,*(p+i));
	}
	printf("使用‘balance’作为地址的数组值：\n");
	for(i = 0;i < 5;i++){
		printf("*(balance + %d) : %f\n",i,*(balance+i));
	}
	return 0;
}
