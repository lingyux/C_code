--c预处理器不是编译器组成部分，编译过程中一个单独步骤
--所有的预处理都是以 # 开头，必须为第一个非空字符。
==重要的预处理指令
-- 指令       -- 描述
-- #define   -- 定义宏
-- #include  -- 包含一个源代码文件
-- #undef    -- 取消已定义的宏
-- #ifdef    -- 如果宏已经定义，则返回真
-- #ifndef   -- 如果宏没有定义，则返回真
-- #if       -- 如果给定条件为真，则编译下面代码
-- #else     -- #if 的替代方案
-- #elif     -- 如果前面的 #if 给定条件不为真，当前条件为真，则编译下面代码
-- #endif    -- 结束一个 #if……#else 条件编译块
-- #error    -- 当遇到标准错误时，输出错误消息
-- #pragma   -- 使用标准化方法，向编译器发布特殊的命令到编译器中

==example
--#define MAX_ARRAY_LENGTH 20       //这个指令告诉 CPP 把所有的 MAX_ARRAY_LENGTH 替换为 20。使用 #define 定义常量来增强可读性。

--#include<stdio.h>
--#include "myheader.h"

--#undef FILE_SIZE
--#define FILE_SIZE 42                //这个指令告诉 CPP 取消已定义的 FILE_SIZE，并定义它为 42。

--#ifndef MESSAGE
--#define MESSAGE "You wish"
--#endif
上述三行告诉cpp只有当MESSAGE未定义时才定MESSAGE

--#ifdef DEBUG
--/*Your dubugging statements here*/
--#endif

--预定义宏
--  宏   -- 描述
--_DATE_ --当前日期一个以"MMM DD YYYY"格式表示的字符常量
--_TIME_ --当前时间一个以"HH:MM:SS"格式表示的u字符常量
--_FILE_ --这会包含当前文件名一字符常量
--_LINE_ --这会包含当前行号一十进制常量
--_STDC_ --当编译器执行ANSI标准时，定义为一


==example
--cpp01.c

--处理运算符

== 宏延续运算符 (\)

一个宏通常卸载一个单行上，但是如果宏太长，则可以使用宏运算符(\).
--example:
-- #define message_for(a,b)\
		printf(#a "and" #b ":We love you!\n")

--字符串常量化运算符
-- 在宏定义中，当需要一个宏的参数转换为字符串常量时，则使用字符串常量化运算符(#)。在宏中使用的该运算符有一个特定的参数或者是参数列表。
--example：
cpp02.c

--标记粘贴运算符(##)
--宏定义内的标记粘贴运算符(##)会合并两个参数，它允许在宏定义中两个独立的标记被合并成一个标记。
--example：cpp03.c
--结果：token34 = 40
--原因：实际产生的输出：
printf("token34 = %d",token34);
 token##n 连接到 token34 中，在这里，使用字符串常量化运算符（#）和标记粘贴运算符（##）

--defined()运算符
预处理器defined运算符使用在常量表达式中的，用来确定一个标识符是否已经用#define定义过。如果指定的标识符已经定义，则值为真(非零),否则为假。
--example
--cpp04.c
--结果：Here is the message: You wish!

--参数化的宏
CPP一个强大的地方是可以使用参数化的宏来模拟函数。
--example
int square(int x){
	return x*x;
}
--可以用宏重写上面的代码
--
#define square(x) ((x)*(x))
--example
--cpp05.c
--运行结果：Max between 20 and 10 is 20;