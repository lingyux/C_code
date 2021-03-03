//计算均差
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

double calculateSD(double data[]);

int main()
{
    int i;
    double data[10];

    printf("输入10个元素: ");
    for (i = 0; i < 10; ++i)
        scanf("%lf", &data[i]);

    printf("\n标准偏差 = %.6lf\n", calculateSD(data));

    return 0;
}

double calculateSD(double data[])
{
    double sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for (i = 0; i < 10; ++i)
    {
        sum += data[i];
    }

    mean = sum / 10;

    for (i = 0; i < 10; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / 10);
}
