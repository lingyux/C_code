/*
#define MON 1
#define TUS 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7
*/
/*
enum day{
	MON = 1,TUE,WED,THU,FRI,SAT,SUN
};
*/
//枚举变量的定义
/*
enum DAY{
	MON = 1,TUE,WED,THU,FRI,SAT,SUN
};
enum DAY day;
*/
/*
enum DAY{
	MON = 1,TUE,WED,THU,FRI,SAT,SUN
}day;
*/
/*
enum {
	MON = 1,TUE,WED,THU,FRI,SAT,SUN
}day;
*/
#include<stdio.h>
enum DAY{
	Mon = 1,Tue,Wed,Thu,Fri,Sat,Sun
}day;
int main(){
	for(day = Mon;day <= Sun;day++){
		printf("枚举元素:%d\n",day);
	}
	return 0;
} 
