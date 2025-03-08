#include <stdio.h>

int main()
{
    int max(int x, int y);    // 函数声明
    int a[10], m, n, i;

    printf("enter 10 integer numbers: "); // 提示输入
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);               // 输入 10 个整数

    printf("\n");

    for (i = 1, m = a[0], n = 0; i < 10; i++)
    {
        if (max(m, a[i]) > m)    // 若 max 函数返回的值大于 m
        {
            m = max(m, a[i]);    // max 函数返回的值取代 m 原值
            n = i;               // 把此数组元素的序号记下来，放在 n 中
        }
    }

    printf("The largest number is %d\nit is the %dth number.\n", m, n + 1);
    return 0;
}

int max(int x, int y)    // 定义 max 函数
{
    return (x > y ? x : y);    // 返回 x 和 y 中的大者
}
