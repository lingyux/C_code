//共用体
/*
 * 允许在相同的内存位置存储不同的数据类型。
 * 可以定义一个带有多个成员的共用体，但是一个时候只能由一个成员带值
 * 共用体提供了一种使用相同的内存位置的有效方式
 */
//语法格式
union [union tag]{
    member definition;
    member definition;
    ...
    member definition;
}[one or more union variables]
/*
 * union tag是可选的，每个member definition是标准的变量定义，比如int i,float f;
 * 在共用体定义的末尾，最后一个分号之前，可以指定一个或多个共用体变量
 */
//例子
union Data{
    int i;
    float f;
    char str[20];
}data;
/*
 * 如上，Data类型的变量可以存储一个整数，或者一个浮点数，或者一个字符串。
 * 这意味着一个变量(统一内存位置)可以存放多个多种类型的数据。
 */
访问共用体成员，使用成员访问运算符（.）.成员访问运算符是共用体变量名称和我们要访问的共用体成员之间的一个句号。您可以使用 union 关键字来定义共用体类型的变量。
union02.c演示了共用体的用法---str变量的值占据了内存位置，所以str可以正常显示，但是共用体i和f的值有损坏
union03.c演示了共用体的用法---所有成员访问正常，因为同一时间只用到一个成员
