#include<stdio.h>

typedef struct Stu
{
	char name[20];
	short age;
	char tele[20];
	char sex[5];
} Stu;	//typedef 重新定义变量 即用struct stu s1 和 Stu s1 是等价的

void Print1(Stu tmp)
{
	printf("name : %s\n", tmp.name);
	printf("age  : %d\n", tmp.age);
	printf("tele : %s\n", tmp.tele);
	printf("sex  : %s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name : %s\n", ps->name);
	printf("age  : %d\n", ps->age);
	printf("tele : %s\n", ps->tele);
	printf("sex  : %s\n", ps->sex);
}

int main()
{
	Stu s = {"David", 20, "255220", "male"};	//创建结构体变量局部变量
	Print1(s);
	Print2(&s);
	return 0;
}