//指向结构的指针
/*可以定义指向结构的指针，定义方式与定义指向其他类型变量的指针相似
 * struct Books *struct_pointer;
 * 为了查找结构变量的地址，可以把&运算符放在结构名称的前面
 * struct_pointer->title;
 */
#include<stdio.h>
#include<string.h>
struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
/* 函数声明 */
void printBook(struct Books *book);
int main(){
    struct Books Book1;
    struct Books Book2;
    
    strcpy(Book1.title,"C Programming");
    strcpy(Book1.author,"Zara Ali");
    strcpy( Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;
 
    /* Book2 详述 */
    strcpy( Book2.title, "Telecom Billing");
    strcpy( Book2.author, "Zara Ali");
    strcpy( Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;
    
    /*  通过传Book1的地址来输出Book1的信息  */
    printBook(&Book1);
    /*  通过传Book1的地址来输出Book1的信息  */;
    printBook(&Book2);
    
    return 0;
}

void printBook(struct Books *book){
    printf("Book title : %s\n",book->title);
    printf("Book author : %s\n",book->author);
    printf("Book subject : %s\n",book->subject);
    printf("Book book_id : %d\n",book->book_id);
}
