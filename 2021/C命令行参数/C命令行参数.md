## C命令行参数

执行程序时，可以从命令行传值给C程序。这些值被称为**命令行参数**

当你需要从外部控制程序时，命令行参数就变得重要了

命令行参数是使用**main()**函数参数处理，其中，**argc**是指传入参数的个数，**argv[]**是一个指针数组，指向的是传递给程序的每个参数

#### 实例1

`arg01.c`

```c
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    }
    else if (argc > 2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
    //return 0;
}
```



#### 运行结果

```
$./a.out testing
The argument supplied is testing
```

```
$./a.out testing1 testing2
Too many arguments supplied.
```

```
$./a.out
One argument expected
```

#### 注意点

应当指出的是，**argv[0]**存储程序的名称，**argv[1]**是一个指向第一个命令行参数的指针，***argv[n]**是最后一个参数。如果没有提供任何参数，**argc**将为1，倘若传入了一个参数，**argc**会被设置成2

传递参数需要注意的是，多个命令行参数之间用**空格**分割，倘若参数本身带有空格，那么传递参数时应把参数放置在**" "**或者**' '**内部。

#### 实例2

```c
//arg02.c
#include<stdio.h>

int main(int argc , char *argv[])
{
    printf("Program name %s\n",argv[0]);

    if(argc==2)
    {
        printf("The argument supplied is %s\n",argv[1]);
    }
    else if (argc>2)
    {
        printf("Too many arguments supplied.\n");
    }
    else
    {
        printf("One argument expected.\n");
    }
    
    
}

```

#### 运行结果

```
 ./a.out "testint1 testing2"
Program name ./a.out
The argument supplied is testint1 testing2
```

#### 补充

```c
int main(int argc,char char *argv[])
//并不一定要这样写
int main(int test_argc,char *argv[])
```

