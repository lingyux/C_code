# 结构体

- 结构体类型的声明

- 结构体的初始化

- 结构体成员的访问

- 结构体传递参数

  

## 结构体的声明

### 结构的基础知识

> 结构是一些值的集合，这些值称为成员变量结构的每个成员可以是不同类型的变量

### 结构的声明

```c
struct tag
{
    member-list;
    
}variable-list;

//例如描述一个学生
//struct 结构体关键字 stu 结构体标签 struct stu 结构体类型
struct stu
{
    char name[20];
 	short age;
    char tele[20];
    char sex[5];
}s1,s2,s3;	//定义一个结构体类型 s1,s2,s3是三个全局的结构体变量

typedef struct Stu
{
    char name[20];
 	short age;
    char tele[20];
    char sex[5];
}Stu;	//typedef 重新定义变量 即用struct stu s1 和 Stu s1 是等价的


int main()
{
    struct stu s;	//创建结构体变量局部变量
    
    return 0;
}
```

### 结构体成员的类型

结构体的成员可以是标量，数组，指针，甚至其他的结构体

## 结构体变量的定义和初始化

### 定义

```c
struct Point
{
    int x;
    int y;
}p1;	//声明类型的同时定义变量p1

struct Point p2;	//定义结构体变量p2

struct Point p3 = {x,y};	//初始化：定义变量的同时赋予初值


```

### 初始化

```c
typedef struct Stu
{
    char name[20];
 	short age;
    char tele[20];
    char sex[5];
}Stu;	//typedef 重新定义变量 即用struct stu s1 和 Stu s1 是等价的


int main()
{
    Stu s1 = {"张三",20,"255220","男"};	//创建结构体变量局部变量
    struct Stu s2 = {"旺财"，19,"2893","女"};
    
    return 0;
}
```

```c
//包含结构体变量的结构体初始化
struct s
{
    int a;
    char c;
    char arr[10];
    double d;
};

struct T
{
    char ch[10];
    struct S s;
    char *pc;
};

int main()
{
    char arr[] = "hello C";
    struct T t = {"hehe",{100,'2',"hello world",3.14},arr};
    printf("%s\n",t.ch);	//hehw
    printf("%s\n",t.s.arr);	//hello world
    printf("%lf\n",t.s.d);	//3.14
    printf("%s\n",t.pc);	//hello C
    
    
    return 0;
}
```

## 结构体成员的访问

- 结构体变量的成员是通过操作符**（.）**进行访问的，点操作符接受两个操作数

  ```c
  struct Stu
  {
      char name[20];
      int age;
  };
  ```

  ```c
  typedef struct Stu
  {
      char name[20];
   	short age;
      char tele[20];
      char sex[5];
  }Stu;	//typedef 重新定义变量 即用struct stu s1 和 Stu s1 是等价的
  
  void Print1(Stu tmp)
  {
      printf("name : %s\n",tmp.name);
      printf("age  : %d\n",tmp.age);
      printf("tele : %s\n",tmp.tele);
      printf("sex  : %s\n",tmp.sex);
  }
  
  void Print2(Stu* ps)
  {
      printf("name : %s\n",ps->name);
      printf("age  : %d\n",ps->age);
      printf("tele : %s\n",ps->tele);
      printf("sex  : %s\n",ps->sex);
  }
  int main()
  {
      Stu s = {"张三",20,"255220","男"};	//创建结构体变量局部变量
      //打印结构体数据
      //Print1()和Print2()那个更好
      //使用Print1()函数传递的是形参，占用空间较大,而且复制需要一定的时间
      Print1(s);
      Print2(&s);
      return 0;
  }
  ```

  ==函数传递参数的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销较大，会导致性能的下降==

  ==因此，传递参数的时候，尽量传递变量的地址==

  ### 压栈

  ```c
  int Add(int x,int y)
  {
      int z = 0;
      z = x+y;
      return z;
  }
  
  int main()
  {
      int a = 10;
      int b = 20;
      int ret = 0;
      ret = Add(a,b);
      
      return 0;
  }
   
  ```

  ## 例题
  
  ### 喝汽水问题
  
  一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝几瓶汽水
  
  ```c
  #include <stdio.h>
  
  int main()
  {
  	int money = 0;
  	int total = 0;
  	int empty;
  	scanf("%d", &money);
  	//买回来的汽水
  	total = money;
  	empty = money;
  	// 换回来的汽水
  	while (empty >= 2)
  	{
  		total += empty / 2;
  		empty = empty / 2 + empty % 2;
  	}
  	printf("total = %d\n", total );
  	return 0;
  }
  ```
  
  

