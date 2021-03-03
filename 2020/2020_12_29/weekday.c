//整数转换为枚举
#include<stdio.h>
#include<stdlib.h>
int main(){
	enum day {
		saturday,
		sunday,
		monday,
		tuesday,
		wednesday,
		thursday,
		friday
	}weekday;
	int a = 1;
	enum day weekend;
	weekend = (enum day) a;
	printf("weekend %d\n",weekend);
	return 0;
}
