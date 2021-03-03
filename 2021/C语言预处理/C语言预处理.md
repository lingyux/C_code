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

### 宏和函数的对比

- 函数在调用的时候会有函数调用和返回的开销
- 宏在预处理的时候就会完成替换，开销相对较小，没有函数的调用和返回的开销

### 宏的缺点 

- 宏不能调试
- 长度较长的宏在代码规模上面没有优势
- 宏与类型无关，不够严谨
- 副作用的参数，不会影响函数的结果，但是宏会受到影响
- 宏是不能实现递归的

### 宏的优点

- 可以传递类型

  ```c
  #include <stdio.h>
  
  #define MALLOC(num,type) (type*)malloc(num*sizeof(type))
  
  int main()
  {
  	int* p = (int*)malloc(10 * sizeof(int));
  	int* pf = MALLOC(10, int);
  
  	return 0;
  }
  
  ```

  



### 预处理操作符#和##的介绍

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

### 带有副作用的宏参数

```c
#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
	int a = 10;
	int b = 11;
	int max = MAX(a++, b++);
	// 宏的参数是直接替换然后在计算
	// int max=((a++)>(b++)?(a++):(b++))
	
	printf("%d\n", max);
	printf("%d %d\n", a, b );
	// max=12 a=11 b=13
	return 0;
}
```

### 预处理指令#undef

#### 作用

用于移除一个宏定义

```c
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
	printf("MAX = %d\n", MAX);
#undef MAX
	printf("MAX = %d\n", MAX);	//error: 'MAX' undeclared (first use in this function)
    							//9 |  printf("MAX = %d\n", MAX);

	return 0;
}
```



## 命令行定义

```c
#include<stdio.h>

int main()
{
        int arr[SZ] = {0};
        int i=0;
        for(i=0;i<SZ;i++)
                arr[i]=i;
        for(i=0;i<SZ;i++)
                printf("%d ",arr[i]);
        printf("\n");
        return 0;
}
```





## 文件包含#include

### 本地包含 

`#include "filename.h"`

### 库函数

`#include <filename.h>`

```c
#ifndef __TEST_H__
#define __TEST_H__
	int Add(int x, int y);
#endif


#pragma once
int Add(int x,int y);
```



## 条件编译

选择性的编译相关代码

```c
#include <stdio.h>
#define DEBUG


int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
#ifdef DEBUG//如果DEBUG没有定义，则下述代码不参与编译
		printf("%d ", arr[i]);
#endif
	}
	printf("\n");

	return 0;
}
```

### 常见的条件编译指令

```c
//1.
#if 常量表达式 //条件为真，下面的代码参与编译，否则不参与编译

#endif

//2.
#if 常量表达式

#elif

#else

#endif

//3.判断是否被定义
#if defined(symbol)
#ifdef symbol

#if !defined(symbol)
#ifndef symbol

//4.嵌套指令
#if defined(OS_UNIX)
	#ifdef OPTION1
		unix_version_option1();
	#endif
	#ifdef OPTION2
     	unix_version_option2();
	#endif
#elif defined(OS_MSDOS)
	#ifdef OPTION2
		msdos_version_option2();
	#endif
#endif
```

```c
#include <stdio.h>
#define DEBUG 0
int main()
{
// // #if defined(DEBUG)
// // 	printf("hehe\n");
// // #endif
// // #ifdef DEBUG
// // 	printf("hehe\n");
// // #endif
// // 	return 0;
// 	相反情况
// #if !defined(DEBUG)
// 	printf("hehe\n");
// #endif
// 	return 0;
#ifndef DEBUG
	printf("hehe\n");
#endif
	return 0;
}
```

