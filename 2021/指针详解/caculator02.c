
#include <stdio.h>
void menu()
{
    printf("******************\n");
    printf("**1.add    2.sub**\n");
    printf("**3.mul    4.div**\n");
    printf("**0.out    5.xor**\n");
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
    return x / y;
}
int xor(int x, int y)
{
    return x ^ y;
}
int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    int (*pfArr[])(int, int) = {0, add, sub, mul, div, xor};
    do
    {
        menu();
        printf("请选择：>\n");
        scanf("%d", &input);
        if (input > 0 && input <= 5)
        {
            printf("请输入操作数：>\n");
            scanf("%d%d", &x, &y);
            int ret = pfArr[input](x, y);
            printf("%d\n", ret);
        }
        else if (input == 0)
        {
            printf("退出\n");
        }
        else
        {
            printf("您输入的数字无效\n");
        }
    } while (input);
    return 0;
}