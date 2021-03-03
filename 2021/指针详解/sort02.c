#include<stdio.h>
#include<stdlib.h>

struct Stu
{
    char name[20];
    int age;
};

int cmp_int(const void *e1, const void *e2)
{
    //用来比较两个整形值的函数
    return *(int*)e1 - *(int*)e2;
}
void test1()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int cmp_float(const void* e1, const void* e2)
{
    // if (*(float*)e1 == *(float*)e2)
    //     return 0;
    // else if (*(float*)e1 > *(float*)e2)
    //     return 1;
    // else
    //     return -1;
    return ((int)(*(float*)e1 - * (float*)e2));
}
void test2()
{
    float f[] = {9.0, 8.0, 7.0, 6.0, 5.0, 3.4};
    int sz = sizeof(f) / sizeof(f[0]);
    qsort(f, sz, sizeof(f[0]), cmp_float);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%f ", f[i]);
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
void test3()
{
    struct Stu s[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}
int main()
{

    //
    // float f[] = {10.0, 9.9, 8.9, 5.4, 3.2};

    // bubble_sort(arr, sz);

    test1();
    test2();
    test3();
    return 0;
}