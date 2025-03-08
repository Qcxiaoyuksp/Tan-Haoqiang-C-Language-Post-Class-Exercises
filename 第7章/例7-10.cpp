#include <stdio.h>

int main()
{
    float average(float array[10]); // 函数声明
    float score[10], aver;
    int i;

    printf("input 10 scores:\n"); // 提示输入
    for (i = 0; i < 10; i++)
        scanf("%f", &score[i]);   // 输入 10 个分数

    printf("\n");
    aver = average(score);        // 调用 average 函数
    printf("average score is %5.2f\n", aver); // 输出平均分，保留两位小数

    return 0;
}

float average(float array[10]) // 定义 average 函数
{
    int i;
    float aver, sum = array[0];

    for (i = 1; i < 10; i++)
        sum = sum + array[i]; // 累加学生成绩

    aver = sum / 10; // 计算平均分
    return(aver);    // 返回平均分
}
