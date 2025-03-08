#include <stdio.h>

void average(float *p, int n); // 函数声明
void search(float (*p)[4], int n); // 函数声明

int main()
{
    float score[3][4] = {{65, 67, 70, 60}, {80, 87, 90, 81}, {90, 99, 100, 98}};

    average(*score, 12); // 求 12 个分数的平均分
    search(score, 2);    // 求序号为 2 的学生的成绩

    return 0;
}

void average(float *p, int n) // 定义求平均成绩的函数
{
    float *p_end;
    float sum = 0, aver;
    p_end = p + n - 1; // n 的值为 12 时，p_end 的值是 p+11，指向最后一个元素

    for (; p <= p_end; p++)
        sum = sum + (*p);

    aver = sum / n;
    printf("average=%5.2f\n", aver);
}

void search(float (*p)[4], int n) // p 是指向具有 4 个元素的一维数组的指针
{
    int i;
    printf("The score of No. %d are:\n", n);
    for (i = 0; i < 4; i++)
        printf("%5.2f ", *(*(p + n) + i)); // 输出第 n 个学生的成绩
    printf("\n");
}
