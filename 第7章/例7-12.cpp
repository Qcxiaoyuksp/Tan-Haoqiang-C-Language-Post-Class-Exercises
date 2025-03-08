#include <stdio.h>

int main()
{
    void sort(int array[], int n); // 函数声明
    int a[10], i;

    printf("enter array:\n"); // 提示输入
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);   // 输入 10 个整数

    sort(a, 10); // 调用 sort 函数，a 为数组名，大小为 10

    printf("The sorted array:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);  // 输出排序后的数组
    printf("\n");

    return 0;
}

void sort(int array[], int n) // 定义 sort 函数
{
    int i, j, k, t;
    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
            if (array[j] < array[k])
                k = j;
        t = array[k]; // 交换 array[k] 和 array[i]
        array[k] = array[i];
        array[i] = t;
    }
}
