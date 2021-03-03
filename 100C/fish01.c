    #include <stdio.h>
/*分鱼i递归函数*/
int fish(int n, int x)
{
    if ((x - 1) % 5 == 0)
    {
        if (n == 1)
            return 1; //递归出口
        else
            return fish(n - 1, (x - 1) / 5 * 4); //递归调用
    }
    return 0; //x不是复合题意的解，返回0;
}

int main()
{

    int i = 0, flag = 0, x;
    do
    {
        i = i + 1;
        x = i * 5 + 1;
        if (fish(5, x))
        {
            flag = 1;   //找到第一个复合题意的x则标记位置1
            printf("五个人合伙捕到的鱼总数为%d\n", x);
        }
    } while (!flag);//未找到复合题意的x，继续循环

    return 0;
}