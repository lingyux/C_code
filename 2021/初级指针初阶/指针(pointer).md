# 指针(pointer)

### 定义：

指向**内存单元**的一个对象，存放地址的变量。（存放在指针中的值被当作地址处理）

```c
int main(
{
	int a = 10;
	int* p = &a;	//指针变量
	return 0;
}
```

### 指针和指针类型

```c
int main()
{
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(double*));
    
    return 0;
}
```

结果：均为4

```c
int main(){
    int a = 0x11223344;
    int* pa = &a;
    char* pc = &a;	//有警告
    printf("&p\n",pa);
    printf("%p\n",pc);
    return 0;
}
```

#### 指针类型的意义

**指针类型决定了指针进行解引用操作的时候，能够访问空间的大小**，当我是

==int*p==：*p能够访问四个字节

==char*p==：*p能够访问一个字节

==double*p==：*p能够访问8个字节

**指针+-整数**的时候

```c
int main()
{
    int a = 0x11223344;
    int* pa = &a;
    char* pc = &a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);
    
    printf("%p\n",pc);
    printf("%p\n",pc+1);
    
    return 0;
}
```

结果分析：

int*每次+1，相当于整数+4

char* 每次+1，相当于整数+1

double* 每次+1，向后偏移8个字节

![image-20210115161524045](/home/lingyux/.config/Typora/typora-user-images/image-20210115161524045.png)

指针类型决定了指针的步长

#### 实例

```c
int main()
{	
    int arr[10] = {0};
    int* p = arr;//数组名-首元素的地址
    
    int i = 0;
    for(i = 0;i < 10;i++)
    {
        *(p+i) = 1;
    }
    
    return 0;
}
```

#### 野指针

指针指向的位置是不可知的

#### 导致野指针的原因

1.指针为初始化

```c
int main()
{
	int *p;//局部变量为初始化，默认的是随机值
    *p = 20;
    return 0;
}
```

2.当指针跃出自己所能够管理的数组范围时，即成为野指针

```c
int main()
{
    int arr[10] = {0};
    int *p = arr;
    int i = 0;
    for(i = 0;i < 12;i++)
    {
        *p = i;
        p++;
    }
    return 0;
}
```

3.指针指向的内存空间释放

```c
int* test()
{
    int a = 10;
    return &a;
}
int main()
{
    int *p = test();
    *p = 20;
    
    return 0;
}
```

#### 如何避免野指针

1.指针变量初始化

2.当指针指向未知位置的时候或内存空间被释放，指针置为NULL

```c
int main()
{
    int a = 10;
    int *pa = &a;
    *pa = 20;
    pa = NULL;
}
```

3.小心指针越界

4.指针使用之前检查指针有效性

```c
 int main()
{
    int a = 10;
    int *pa = &a;
    *pa = 20;
    if(*pa != NULL)
    {
        *pa = 20;
    }
}
```

#### 指针的运算

- 指针+-整数

  ```c
  int main()
  {
      int arr[10] = {1,2,3,4,5,6,7,8,9,10};
      int i = 0;
      int sz = sizeof(arr)/sizeof(arr[10]);
      int* p = arr;
      for(i = 0;i < sz;i++)
      {
          printf("%d",*p);
          p = p + 1;
      }
  }
  ```

  

- 指针-指针

  ```c
  int main()
  {
      int arr[10] = {1,2,3,4,5,6,7,8,9,10};
      printf("%d\n",&arr[9] - &arr[0]);//得到的为中间的元素个数
      return 0;
  }
  
  ```

  ```c
  #include<stdio.h>
  
  int my_strlen(char* str)
  {
      char* start = str;
      char* end = str;
      while(*end != '\0')
      {
          end++;
      }
      return end - start;
  }
  
  int main()
  {
      char arr[] = "bit";
      int len = my_strlen(arr);
      printf("%d\n",len);
  
      return 0;
  }
  ```

  

- 指针的关系运算

  ```c
  #define N_VALUES 5
  float values[N_VALUES];
  float *vp;
  for(vp = &values[N_VALUES];vp > &values[0];)
  {
      *--vp = 0;
  }
      
  ```

  ```c
  //C语言的标准不保证此种写法可行
  for(vp = &values[N_VALUES-1];vp >= &values[0];vp--)
  {
      *vp = 0;
  }
  ```

  #### 指针和数组

  ```c
  int main()
  {
      int arr[10] = {0};
      printf("%p\n",arr);//arr是首元素的地址
       printf("%p\n",arr+1);
      printf("%p\n",&arr[0]);
      printf("%p\n",&arr[0]+1);
      printf("%p\n",&arr);
      printf("%p\n",&arr+1);//数组的地址+1跳出整个数组 
      //1.&arr- &数组名--取出的是整个数组的地址
      //2.sizeof(arr) - sizeof(数组名)--计算的是整个数组的地址
      return 0;
  }
  ```
  
  ```C
  int main()
  {
      int arr[10] = {0};
      int* p = arr;
      int i = 0;
      for(i = 0;i < 10; i++)
      {
          *(p + i) = i;
      }
      for(i = 0;i < 10; i++)
      {
          printf("%d\n",arr[i]);
          printf("%d\n",*(p+i));
      }
      for(i = 0;i < 10; i++)
      {
          printf("%p  =======  %p\n",p+i,&arr[i]);
      }
      
      return 0;
  }
  ```
  
  ### 二级指针
  
  ```c
  int main()
  {
  	int a = 10;
      int* pa = &a;
      int** ppa = &pa;
      **pa = 20;
      printf("%p\n",**pa);
      printf("%p\n",a);
      return 0;
  }
  ```
  
  ### 指针数组--数组（存放指针的数组
  
  ```c
  int main()
  {
      int a = 10;
      int b = 20;
      int c = 30;
      //int *pa = &a;
      //int *pb = &b;
      //int *pc = &c;
      
      int* arr2[3] = {&a,&b,&c};
      int i = 0;
      for(i = 0; i < 3; i++)
      {
          printf("%d \n",*(arr2[i]));
      }
      return 0;
  }
  ```
  
  
  
  ### 数组指针--指针

