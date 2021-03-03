//c数组允许定义可以存储相同类型数据项的变量，结构是c编程中另一种用户自定义的可用的数据类型，他允许存储不同类型的数据项
/*结构用于表示一条记录，结构体中定义的就是记录的属性
 * struct tag{
 *  member-list
 *  member-list
 *  member-list
 * } variable-list;
 * tag是结构体标签。
 * member-list是标准的变量定义，比如int i等
 * variable结构变量，定义在结构的末尾，最后一个分号之前，可以指定一个或多个结构变量
 */
//以下是Book结构的声明
struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book;
//在一般情况下，tag,member-list,variable-list这三部分至少要出现2个

/*
 * 此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
 * 同时声明了结构体变量s1
 * 这个结构体没有标明标签
 */
struct{
    int a;
    char b;
    double c;
} s1;

/*
 * 此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
 * 结构体的标签被命名为SIMPLE，没有声明变量
 */
struct SIMPLE{
    int a;
    char c;
    double c;
};
//用SIMPLE标签的结构体，另外声明了变量t1,t2,t3
struct SIMPLE t1,t2[20],*t3;

//也可以用typedef创建新类型
typedef struct{
    int a;
    char b;
    double c;
}Simple2;
//现在可以用Simple2作为类型声明新的结构体变量
Simple2 u1,u2[20],*u3;

/*
 * 在上面的声明中，第一个和第二个声明被编译器当作两个完全不同的类型，即使他们的成员列表是一样的，如果令t3 = &s1,是非法的
 */

/*
 * 结构体的成员可以包含其他结构体，也可以包含指向自己结构体类型的指针，通常这种指针的应用是为了实现一些更高级的数据结构如链表和树等
 */
//此结构体的声明包含了其他结构体
struct COMPLEX{
    char string[100];
    struct SIMPLE a;
};
//此结构体的声明包含了指向自己类型的指针
struct NODE{
    char string[100];
    struct NODE *next_node;
};

/*
 * 如果两个结构体互相包含，需要对其中一个结构体进行不完整声明
 */
struct B;   //对结构体B进行不完整声明
//结构体A中包含指向结构体B的指针
struct A{
    struct B *partner;
    //other members;
};
//结构体B中包含指向结构体A中的指针，在A声明完后，B也随之进行声明
struct B{
    struct A *partner;
    //other members
};
