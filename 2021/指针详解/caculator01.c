
#include <stdio.h>
void menu()
{
    printf("******************\n");
    printf("**1.add    2.sub**\n");
    printf("**3.mul    4.div**\n");
    printf("*******0.out******\n");
    printf("******************\n");
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x - y;
}
int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    do
    {
        menu();
        printf("请选择：>\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            printf("请输入两个操作数：\n");
            scanf("%d%d", &x, &y);
            printf("%d\n", add(x, y));
            break;
        case 2:
            printf("请输入两个操作数：\n");
            scanf("%d%d", &x, &y);
            printf("%d\n", sub(x, y));
            break;
        case 3:
            printf("请输入两个操作数：\n");
            scanf("%d%d", &x, &y);
            printf("%d\n", mul(x, y));
            break;
        case 4:
            printf("请输入两个操作数：\n");
            scanf("%d%d", &x, &y);
            printf("%d\n", div(x, y));
            break;
        case 0:
            printf("退出\n");
            break;
        default:
            printf("选择错误！\n");
            break;
        }

    } while (input);
    return 0;
}