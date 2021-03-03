#include <string.h>
#include <stdio.h>


// 声明一个结构体类型
// 声明一个学生类型，通过学生类型来创建学生对象
// 描述学生：学生的属性：名字，电话，性别，年龄
struct Stu//结构体标签
{
	char name[20];//结构体的成员变量
	char tele[12];
	char sex[10];
	int age;
} s4, s5, s6; //全局结构体变量

struct Stu s3;//全局变量
int main()
{
	struct Stu s1;
	struct Stu s2;//结构体变量

	return 0;
}
