--如果程序的结构中包含多个开关量，只有TRUE/FALSE变量

struct {
    unsigned int widthValidated;
    unsigned int hightValidated;
}status;

这种结构需要 8 字节的内存空间，但在实际上，在每个变量中，我们只存储 0 或 1。在这种情况下，C 语言提供了一种更好的利用内存空间的方式。如果您在结构内使用这样的变量，您可以定义变量的宽度来告诉编译器，您将只使用这些字节。

struct{
    unsigned int widthValidated : 1;
    unsigned int hightValidated : 1;    
}status;
上面的结构中，status变量将占据4个字节的内存空间，但是只有2位被用来存储数据。
如果使用了32个变量，每一个变量的宽度为1,那么status结构将使用4个字节。
如果使用33个变量，编译器将分配内存的下一段来存储第33个变量。
实例：structfield01.c

--位域声明
struct  
{
	type [member_name] : width;
};

-type:只能为 int，unsigned int,signed int
-member_name:位域的名称
-width:位域中位的数量。宽度必须小于等于指定类型的位宽

-example:定义一个宽度为3的位域
struct 
 {
 	unsigned int age : 3;
 }age;

example:structfiled02.c

