--typedef 可以用来为类型取一个新的名字
--example
typedef unsigned char BYTE;
在定义这个类型后，标识符BYTE可以视作类型 unsigned char 的缩写
BYTE b1,b2;
按照惯例，定义时使用大写字母，但是并无硬性规定

--example
typedef01.c

--typedef vs #define
#define 是c指令，用于为各种数据类型定义别名，与typedef类似。
区别：
--typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名
--typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的

--example
typedef02.c
