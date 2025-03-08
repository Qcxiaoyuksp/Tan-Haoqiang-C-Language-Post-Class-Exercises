#include <stdio.h>

float Max = 0, Min = 0; // 定义全局变量 Max, Min

int main()
{
    float average(float array[], int n); // 函数声明
    float ave, score[10];
    int i;

    printf("Please enter 10 scores: "); // 提示输入
    for (i = 0; i < 10; i++)
        scanf("%f", &score[i]);        // 输入 10 个分数

    ave = average(score, 10);          // 调用 average 函数
    printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave); // 输出最大值、最小值和平均值

    return 0;
}

float average(float array[], int n) // 定义函数，有一个形参是数组
{
    int i;
    float aver, sum = array[0];
    Max = Min = array[0]; // 初始化 Max 和 Min

    for (i = 1; i < n; i++)
    {
        if (array[i] > Max) // 如果当前元素大于 Max，更新 Max
            Max = array[i];
        else if (array[i] < Min) // 如果当前元素小于 Min，更新 Min
            Min = array[i];

        sum = sum + array[i]; // 累加分数
    }

    aver = sum / n; // 计算平均值
    return(aver);   // 返回平均值
}
