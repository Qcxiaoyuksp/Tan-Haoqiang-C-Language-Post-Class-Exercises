#include <stdio.h>

void inv(int x[], int n); // inv 函数声明

int main()
{
    int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};

    printf("The original array:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]); // 输出原始数组
    printf("\n");

    inv(a, 10); // 调用 inv 函数，反转数组

    printf("The array has been inverted:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]); // 输出反转后的数组
    printf("\n");

    return 0;
}

void inv(int x[], int n) // 形参 x 是数组名
{
    int temp, i, j, m = (n - 1) / 2;

    for (i = 0; i <= m; i++)
    {
        j = n - 1 - i;
        temp = x[i]; // 交换 x[i] 和 x[j]
        x[i] = x[j];
        x[j] = temp;
    }
    return;
}
