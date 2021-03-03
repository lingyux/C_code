# 程序的环境和预处理

## 程序的翻译环境

在翻译环境中，源代码被转换为可执行的机器指令

## 程序的执行环境

用于执行代码

## C语言程序的编译和链接

### 编译

任何一个源文件都会经过编译器的单独处理，转换为目标文件**.obj**

### 链接

所有的目标文件会在连接器的作用下配合链接库可以生成目标程序

```c
#include <stdio.h>

extern int add(int x,int y);
int main()
{
    int x = add(10, 20);
    printf("Hello, World!\n");
    printf("x = %d", x);
    return 0;
}
```

```c
int add(int x,int y)
{
  return x+y;
}
```

> - 组成一个程序的源文件会通过编译过程分别转换成目标代码**（object code）**
> - 每个目标文件由连接器**（linker）**捆绑在一起，形成一个单一且完整的可执行程序
> - 链接器同事也会引入标准C函数库中任何被该函数所用到的函数，而且他可以搜索程序员个人的程序库将其需要的函数也链接到程序中













## 预定义符号介绍







## 预处理指令#define

## 宏和函数的对比

## 预处理操作符#和##的介绍

### 如何把参数添加到字符串中

把一个宏的参数直接变成一个字符串插入到输出的字符串中

```c
#include <stdio.h>

#define PRINT(x) printf("the value of  "#x" is %d\n",x)

int main()
{
	int a = 10;
	int b = 20;
	PRINT(a);
	// printf("the value of ""a""is %d\n",a);
	PRINT(b);

	return 0;
}
```

### ##的作用

可以把位于塔两端的符号合并成一个符号。它允许宏定义从分离的文本创建标识符



```c
#include <stdio.h>

#define CAT(X,Y) X##Y

int main()
{
	int Class84 = 2019;
	printf("%d\n", Class84);
	printf("%d\n", CAT(Class, 84));
	// printf("%d\n",Class##84);
	// printf("%d\n",Class84);
	return 0;
}
```



## 命令定义







## 预处理指令#include





## 预处理指令#undef







## 条件编译