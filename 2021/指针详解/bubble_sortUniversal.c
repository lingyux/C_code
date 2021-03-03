#include<stdio.h>
#include<stdlib.h>

struct Stu
{
    char name[20];
    int age;
};
void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
}
//实现冒泡排序函数的程序员不知道未来排序的数据类型
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
{
    int i = 0;
    //比较多少趟
    for (i = 0; i < sz; i++)
    {
        //每一趟比较的对数
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            //两个元素的比较
            if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
            {
                //交换
                Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
            }
        }
    }
}

int cmp_int(const void *e1, const void *e2)
{
    //用来比较两个整形值的函数
    return *(int*)e1 - *(int*)e2;
}

void test1()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    //使用冒泡排序函数的程序员一定直到自己排序的数据是什么类型
    //应该直到如何比较待排序数组中的元素
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
    //比较名字就是比较字符串
    //字符串比较不能直接用 < >比较，应该用strcmp函数
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void test2()
{
    struct Stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}
int main()
{
    test1();
    test2();

    return 0;
}
