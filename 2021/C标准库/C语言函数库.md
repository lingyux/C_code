# C语言函数库

### assert.h

#### 简介

assert.h提供了一个名为assert的宏，用于验证程序的假设，并在假设位假的时候输出诊断消息

宏assert.h指向另一个宏NDEBUG，NDEBUG不是<asset.h>中的一部分。如果已经在<assert.h>中定义NDEBUG的名称，则assert宏定义如下

```c
#define assert(ignore)((void)0)
```

#### 库宏

assert.h定义的唯一一个函数

##### **void assert(int expression)**

```c
//实例
#include <assert.h>
#include <stdio.h>
 
int main()
{
   int a;
   char str[50];
     
   printf("请输入一个整数值： ");
   scanf("%d", &a);
   assert(a >= 10);
   printf("输入的整数是： %d\n", a);
    
   printf("请输入字符串： ");
   scanf("%s", str);
   assert(str != NULL);
   printf("输入的字符串是： %s\n", str);
    
   return(0);
}
```

### ctype.h

#### 简介

**ctype.h**提供一些函数可以用来测试和映射字符。

这些函数接受**int**作为参数，它的值必须是一个EOF或者无符号字符

如果参数满足条件，返回非零(true)，否则返回0

#### 库函数

##### **int isalnum(int c)**：

用来检查所传递的字符是否是字母或数字

**声明**

```c
int isalnum(int c);
```

**参数**

- c -- 要检查的字符

```c
//实例
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isalnum(var1) )
   {
      printf("var1 = |%c| 是字母数字\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是字母数字\n", var1 );
   }
   if( isalnum(var2) )
   {
      printf("var2 = |%c| 是字母数字\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是字母数字\n", var2 );
   }
   if( isalnum(var3) )
   {
      printf("var3 = |%c| 是字母数字\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 不是字母数字\n", var3 );
   }
   if( isalnum(var4) )
   {
      printf("var4 = |%c| 是字母数字\n", var4 );
   }
   else
   {
      printf("var4 = |%c| 不是字母数字\n", var4 );
   }
    
   return(0);
}

```

##### **int isalpha(int c)**

**声明**

```c
int isalpha(int c);
```

**参数**

- c -- 要传输的字符

**返回值**

如果c是一个字母，返回非零值，否则返回0

```c
//实例
#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isalpha(var1) )
   {
      printf("var1 = |%c| 是一个字母\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是一个字母\n", var1 );
   }
   if( isalpha(var2) )
   {
      printf("var2 = |%c| 是一个字母\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是一个字母\n", var2 );
   }
   if( isalpha(var3) )
   {
      printf("var3 = |%c| 是一个字母\n", var3 );
   }
   else
   {
      printf("var3 = |%c| 不是一个字母\n", var3 );
   }
   if( isalpha(var4) )
   {
      printf("var4 = |%c| 是一个字母\n", var4 );
   }
   else
   {
      printf("var4 = |%c| 不是一个字母\n", var4 );
   }
   
   return(0);
}
```

### iscntrl

#### 描述

C 库函数 **void iscntrl(int c)** 检查所传的字符是否是控制字符。

根据标准 ASCII 字符集，控制字符的 ASCII 编码介于 0x00 (NUL) 和 0x1f (US) 之间，以及 0x7f (DEL)，某些平台的特定编译器实现还可以在扩展字符集（0x7f 以上）中定义额外的控制字符。

#### 声明

```c
int iscntrl(int c);
```

#### 参数

c – 要检查的字符

#### 返回值

如果c是一个控制字符，则该函数返回非零值，否则，返回0

#### 实例

```c
#include<stdio.h>
#include<ctype.h>

int main()
{
	int i = 0,j = 0;
	char str1[] = "all \a about \t programming";
	char str2[] = "Runoob \n tutorials";

	//输出字符串直到控制字符 \a

	while(!iscntrl(str1[i]))
	{
		putchar(str1[i]);
		i++;
	}

	//输出字符串直到控制字符 \n
	while(!iscntrl(str2[j]))
	{
		putchar(str2[j]);
		j++;
	}

	return 0;
}
```

### isgraph()

#### 描述

C 库函数 **int isgraph(int c)** 检查所传的字符是否有图形表示法。

带有图形表示法的字符是除了空白字符（比如 ' '）以外的所有可打印的字符。

#### 声明

```c
int isgraph(int c);
```

#### 参数

**c**–要检查的字符

#### 返回值

如果**c**有图形表示法，则该函数返回非零值，否则返回0

#### 实例

```c
#include<stdio.h>
#include<ctype.h>

int main()
{
	int var1 = '3';
	int var2 = 'm';
	int var3 = ' ';
	if (isgraph(var1))
	{
		printf("var1 = |%c| 是可打印的\n", var1);
	}
	else
	{
		printf("var1 = |%c| 是不可打印的\n", var1);
	}
	if (isgraph(var2))
	{
		printf("var2 = |%c| 是可以打印的\n", var2);
	}
	else
	{
		printf("var2 = |%c| 是不可打印的\n", var2);
	}
	if (isgraph(var3))
	{
		printf("var3 = |%c| 是可以打印的", var3);
	}
	else
	{
		printf("var3 = |%c| 是不可打印的\n", var3);
	}

	return 0;
}
```

```c
#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
	int i;
	printf("C 语言中所有的图形字符：\n");

	for (int i = 0; i <= 127; ++i)
	{
		if (isgraph(i) != 0)
		{
			/* code */
			printf("%c ", i);
		}
	}
	return 0;
}
```

### islower()

#### 描述

C库函数**int islower(int c)**检查所传输的字符是否为小写字母

#### 声明

```c
int islower(int c)
```

#### 参数

> c -- 这是要检查的字符

#### 返回值

> 如果c是一个小写字母，则该函数返回非零值，否则返回0

#### 实例

```c
#include<stdio.h>
#include<ctype.h>

int main()
{
	int var1 = 'Q';
	int var2 = 'q';
	int var3 = '3';

	if (islower(var1))
	{
		printf("var1 = |%c| 是一个小写字母\n", var1);
	}
	else
	{
		printf("var1 = |%c| 不是一个小写字母\n", var1);
	}

	if (islower(var2))
	{
		printf("var2 = |%c| 是一个小写字母\n", var2);
	}
	else
	{
		printf("var2 = |%c| 不是一个小写字母\n", var2);
	}

	if (islower(var3))
	{
		printf("var3 = |%c| 是一个小写字母\n", var3);
	}
	else
	{
		printf("var3 = |%c| 不是一个小写字母\n", var3);
	}

	return (0);

}
```

### isprint()

#### 描述

> 检查所传递的字符是否是可打印的。

#### 声明

> `int isprint(int c);`

#### 参数

> **c** —要传递的字符

#### 返回值

> 如果**c**是一个可打印的字符，则该函数返回非零值(true)，否则返回0(false)

#### 实例

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	int var1 = 'k';
	int var2 = '8';
	int var3 = '\t';
	int var4 = ' ';

	if (isprint(var1))
		printf("var1 =|%c| can be printed\n", var1);
	else
		printf("var1 = |%c| can not be printed\n", var1);
	if (isprint(var2))
		printf("var2 =|%c| can be printed\n", var2);
	else
		printf("var2 = |%c| can not be printed\n", var2);
	if (isprint(var3))
		printf("var3 =|%c| can be printed\n", var3);
	else
		printf("var3 = |%c| can not be printed\n", var3);
	if (isprint(var4))
		printf("var4 =|%c| can be printed\n", var4);
	else
		printf("var4 = |%c| can not be printed\n", var4);

	return 0;
}
```

### ispunct()

#### 描述

> 用来检查所传递的字符是否为标点符号字符。标点符号字符可以是非字母数字的任意图形字符

#### 声明

> `int ispunct(int c)`

#### 参数

> c -- 这是要检查的字符

#### 返回值

> 如果c是一个标点符号返回非零值(true)，否则返回0(false)

#### 实例

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	int var1 = 'k';
	int var2 = '8';
	int var3 = '/';
	int var4 = ' ';

	if (ispunct(var1))
		printf("var1 =|%c| is a punctuation\n", var1);
	else
		printf("var1 = |%c| is not a punctuation\n", var1);
	if (ispunct(var2))
		printf("var2 =|%c| is a punctuation\n", var2);
	else
		printf("var2 = |%c| is not a punctuation\n", var2);
	if (ispunct(var3))
		printf("var3 =|%c| is a punctuation\n", var3);
	else
		printf("var3 = |%c| is not a punctuation\n", var3);
	if (ispunct(var4))
		printf("var4 =|%c| is a punctuation\n", var4);
	else
		printf("var4 = |%c| is not a punctuation\n", var4);

	return 0;
}
```

### isspace()

#### 描述

> 检查所传递的字符是否为空白字符

>| ' '  | (0x20) |      space(SPC)空格字符       |
>| :--: | :----: | :---------------------------: |
>| '\t' | (0x09) | horizontal tab(TAB)水平制表符 |
>| '\n' | (0x0a) |       newline(LF)换行符       |
>| '\v' | (0x0b) |  vertical tab(VT)垂直制表符   |
>| '\f' | (0x0c) |        feed(FF)换页符         |
>| '\r' | (0x0d) |   carriage return(CR)回车符   |

#### 声明

> `int isspace(int c);`

#### 参数

>c -- 这是要检查的字符

#### 返回值

> 如果**c**是一个空白字符，则返回非零值(true)，否则返回0(false)

#### 实例

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	int var1 = 't';
	int var2 = '1';
	int var3 = ' ';

	if (isspace(var1))
		printf("var1 =|%c| is a space\n", var1);
	else
		printf("var1 = |%c| is not a space\n", var1);
	if (isspace(var2))
		printf("var2 =|%c| is a space\n", var2);
	else
		printf("var2 = |%c| is not a space\n", var2);
	if (isspace(var3))
		printf("var3 =|%c| is a space\n", var3);
	else
		printf("var3 = |%c| is not a space\n", var3);

	return 0;
}
```

### isupper()

#### 描述

> 用来检查所传递的字符是否为大写字符

#### 声明

> `int isupper(int c);`

#### 参数

>c -- 这是要检查的字符

#### 返回值

> 如果**c**是一个大写字母，则函数返回非零值(true)，否则返回0(false)

#### 实例

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	int var1 = 'M';
	int var2 = 'm';
	int var3 = '3';

	if (isupper(var1))
		printf("var1 =|%c| is a supper character\n", var1);
	else
		printf("var1 = |%c| is not a supper character\n", var1);
	if (isupper(var2))
		printf("var2 =|%c| is a supper character\n", var2);
	else
		printf("var2 = |%c| is not a supper character\n", var2);
	if (isupper(var3))
		printf("var3 =|%c| is a supper character\n", var3);
	else
		printf("var3 = |%c| is not a supper character\n", var3);

	return 0;
}
```

### isxdigit()

#### 描述

> 用来检查所传递的字符是否为16进制数字 **c**是单个字符

#### 声明

> `int isxdigit(int c);`

#### 参数

>c -- 这是要检查的字符

#### 返回值

> 如果是16进制数字，返回非零值

#### 实例

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	char c = '5';
	int result;

	//传入字符
	result = isxdigit(c);//result返回的结果为非0
	printf("%c 传入到 isxdigit() 函数结果为 %d\n", c, isxdigit(c) );

	//非16进制树作为参数
	c = 'M';

	result = isxdigit(c);//result 为0

	printf("%c 传入到 isxdigit() 函数的结果为 %d\n", c, isxdigit(c) );

	return 0;
}
```

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[] = "123c@#run[oobe?";

	int i = 0;
	for (i = 0; str[i] != '\0'; ++i)
	{
		/* code */
		if (isxdigit(str[i]))
		{
			printf("%c 是一个十六进制数\n", str[i]);
		}
	}
}
```

### tolower()

#### 描述

> 把给定的字母转化为小写字母

#### 声明

> `int tolower(int c);`

#### 参数

>c -- 这是要检查的字符

#### 返回值

> 如果**c**有相对应的小写字母，则该函数返回c的小写字母，否则保持**c**不变。返回值是一个可被隐式转换为**char**类型的**int**值。

#### 实例

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	int i = 0;
	char c;
	char str[] = "WANG";

	while (str[i])
	{
		putchar(tolower(str[i]));
		i++;
	}

	return 0;
}
```

### toupper()

#### 描述

> 把小写字母转换为大写字母

#### 声明

> `int toupper(int c);`

#### 参数

> **c**—将要被转换为大写字母的字母。

#### 返回值

>如果 c 有相对应的大写字母，则该函数返回 c 的大写字母，否则 c 保持不变。返回值是一个可被隐式转换为 char 类型的 int 值。

#### 实例

```c
#include <stdio.h>
#include <ctype.h>

int main()
{
	int i = 0;
	char c;
	char str[] = "wang";

	while (str[i])
	{
		putchar(toupper(str[i]));
		i++;
	}

	return 0;
}
```

