# C文件操作

## 文件类型

### 文本文件

以**ASCII**形式存放在外存中可以识别出来的

### 二进制文件

数据在内存中以二进制的形式存在，如果不加以转换把内存里的数据直接放在外存里，这种文件就是 二进制文件



## 文件缓冲区

**输入缓冲区和输出缓冲区**

### 文件指针

每个被使用的文件都在内存中开辟了一块相应的文件信息区，用来存放文件的相关信息。这些信息都是存放在一个结构体变量中的，该结构体变量是由系统声明的，取名**FILE**

```c
struct _iobuf{
    char *_ptr;
    int _cnt;
    char* _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char* _tmpfname;
};
typedef struct _iobuf FILE;	
```

一般都是处通过**FILE**类型的指针来维护**FILE**类型的变量

通过文件指针，变量能够找到相关文件

### 文件的打开和关闭

文件读写之前需要先打开文件，在使用之后需要关闭文件

```c
FILE* fopen(const char* filename,const char* mode);
int fclose(FILE* stream);
```

打开方式

| 文件使用方式 | 含义                                     | 如果指定文件不存在 |
| ------------ | ---------------------------------------- | ------------------ |
| "r"(只读)    | 为了输入数据，打开一个已经存在的文本文件 | 出错               |
| "w"(只写)    | 为了输出数据，打开一个文本文件           | 建立一个新文件     |
| "a"(追加)    | 向文本文件末尾追加数据                   | 出错               |
| "rb"(只读)   | 为了输入数据，打开一个二进制文件         | 出错               |
| "wb"(只写)   | 为了输出数据，打开一个二进制文件         | 建立一个新文件     |
| "ab"(追加)   | 向二进制文件末尾追加数据                 | 出错               |
| "r+"(读写)   | 为了读和写，打开一个文本文件             | 出错               |
| "w+"(读写)   | 为了读和写，建立一个新的文本文件         | 建立一个新的文件   |
| "a+"(读写)   | 打开一个文件，在文件的末尾进行读写       | 建立一个新的文件   |
| "rb+"(读写)  | 为了读和写，打开一个二进制文件           | 出错               |
| "wb+"(读写)  | 为了读和写，新建一个二进制文件           | 建立一个新的文件   |
| "ab+"(读写)  | 打开一个二进制文件，在文件的末尾进行读写 | 建立一个新的文件   |

```c
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	// .表示当前路径
	// ..表示上一级路径
	// 打开文件test.txt
	FILE* pf = fopen("test.txt", "w"); //绝对路径的写法
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// 打开成功
	// 读文件


	// 关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
```



## 文件的顺序读写

| 功能           | 函数名  | 适用于     |
| -------------- | ------- | ---------- |
| 字符输入函数   | fgetc   | 所有输入流 |
| 字符输出函数   | fputc   | 所有输出流 |
| 文本行输入函数 | fgets   | 所有输入流 |
| 文本行输出函数 | fputs   | 所有输出流 |
| 格式化输入函数 | fscanf  | 所有输入流 |
| 格式化输出函数 | fprintf | 所有输出流 |
| 二进制输入     | fread   | 文件       |
| 二进制输出     | fwrite  | 文件       |
|                |         |            |

```c
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	// .表示当前路径
	// ..表示上一级路径
	// 打开文件test.txt
	FILE* pf = fopen("test.txt", "w"); //绝对路径的写法
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// 打开成功

	// 写文件
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);


	// 关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
```

```c
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
	// .表示当前路径
	// ..表示上一级路径
	// 打开文件test.txt
	FILE* pfRead = fopen("test.txt", "r"); //绝对路径的写法
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	// 打开成功

	// 读文件
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));

	// 关闭文件
	fclose(pfRead);
	pfRead = NULL;
	return 0;
}
```

```c
//fgets()
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>



int main()
{
	char buf[1024] = {0};
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}

	fgets(buf, 1024, pf);
	// printf("%s\n", buf);
	puts(buf);
	fgets(buf, 1024, pf);
	// printf("%s\n", buf);
	puts(buf);
	fclose(pf);
	pf = NULL;

	return 0;
}
```



```c
//fputs()
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>



int main()
{
	char buf[1024] = {0};
	FILE* pf = fopen("tet.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	char str[] = "lingyux\n";
	fputs(str, pf);
	fputs("hello", pf);
	fclose(pf);
	pf = NULL;

	return 0;
}
```



```c
//从键盘读取数据
// 从键盘读取文本
int main()
{
	char buf[1024] = {0};
	fgets(buf, 1024, stdin); //从标准输入读取
	fputs(buf, stdout); //输出到标准输出
       
    gets(buf);
	puts(buf);

	return 0;
}
```



```c
//格式化输出函数
struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = {100, 3.14f, "bit"};
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
		return 0;
	// 格式化的写入文件

	fprintf(pf, "%d %.2f %s", s.n, s.score, s.arr);

	fclose(pf);
	pf = NULL;

	return 0;
}
```



```c
//格式化输入函数
struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = {0};
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
		return 0;
	// 格式化的输入文件

	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
	printf("%d %.2f %s\n", s.n, s.score, s.arr);
    
    fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
	printf("%d %.2f %s\n", s.n, s.score, s.arr);//从键盘读取数据
    
	fclose(pf);
	pf = NULL;

	return 0;
}
```

```c
//二进制输入
//fread()
struct S
{
	char name[20];
	int age;
	double score;
};

int main()
{
	struct S tmp = {0};

	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
		return 0;

	fread(&tmp, sizeof(struct S), 1, pf);

	printf("%s %d %.2lf\n", tmp.name, tmp.age, tmp.score);
	fclose(pf);
	pf = NULL;

	return 0;
}

```

```c
//二进制输出
//fwrite()
struct S
{
	char name[20];
	int age;
	double score;
};

int main()
{
	struct S s = {"lingyux", 22, 3.14};

	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
		return 0;

	fwrite(&s, sizeof(struct S), 1, pf);

	fclose(pf);
	pf = NULL;

	return 0;
}

```



### 函数对比

- **scanf/printf**：从标准输入输出流读取输出数据

- **fscanf/fprintf**：针对所有输入输出流的格式化输入输出函数

- **sscanf/sprintf**：**sscanf**从字符串中读取格式化的数据 **sprintf**是把格式化的数据存储到字符串

  - ```c
    struct S
    {
    	int n;
    	float score;
    	char arr[10];
    };
    
    int main()
    {
    	struct S s = {100, 3.14, "lingyux"};
    	struct S tmp = {0};
    
    	char buf[1024] = {0};
    	// 把格式化的数据转换成字符串存储到buf
    	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
    	printf("%s\n", buf);
    	// 从buf中读取格式话的数据到tmp
    	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
    
    	printf("%d %.2f %s\n", tmp.n, tmp.score, tmp.arr);
    
    	return 0;
    }
    ```

## 文件的随机读写

### fseek()

根据文件指针位置和偏移量定义文件读取位置

```c
#include <stdio.h>
#include <errno.h>
#include <string.h>


int main()
{
	FILE* pf = fopen("tet.txt", "r");
	if (pf == NULL)
		return 0;
	// 定位文件指针
	fseek(pf, 4, SEEK_SET);
	// 读取文件
	char ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}
```

### ftell()

- 返回文件指针相对于起始位置的偏移量

`long int ftell(FILE* stream)`

```c
int main()
{
	FILE* pf = fopen("tet.txt", "r");
	if (pf == NULL)
		return 0;
	// 定位文件指针
	fseek(pf, 4, SEEK_SET);
	int pos = ftell(pf);
	printf("%d\n", pos);
	fclose(pf);
	pf = NULL;
	return 0;
}

```

### rewind()

- 让文件指针的位置返回起始位置

```c
int main()
{
	FILE* pf = fopen("tet.txt", "r");
	if (pf == NULL)
		return 0;
	// 定位文件指针
	fseek(pf, 4, SEEK_SET);

	int pos = ftell(pf);
	printf("%d\n", pos);

	rewind(pf);
	pos = ftell(pf);
	printf("%d\n", pos);

	fclose(pf);
	pf = NULL;
	return 0;
}
```



## 文件结束的判定 

### feof()

在读取文件过程中，不能用**feof**的返回值直接用来判断文件是否结束

**应用于当文件读取结束的时候，判断读取失败结束还是遇到文件结尾结束**

1. 文件是否读取结束，判断返回值是否为**EOF(fgetc)**或者**NULL(fgets)**
2. 二进制文件的读取结束判断，判断返回值是否小于实际要读取的个数 