#include <stdio.h>

int main()
{
    int fac(int n);    // fac 函数声明
    int n;
    int y;

    printf("input an integer number: "); // 提示输入
    scanf("%d", &n);                     // 输入要求阶乘的数
    y = fac(n);                          // 调用 fac 函数计算阶乘
    printf("%d! = %d\n", n, y);          // 输出阶乘结果

    return 0;
}

int fac(int n)    // 定义 fac 函数
{
    int f;
    if (n < 0)    // n 不能小于 0
        printf("n < 0, data error!");
    else if (n == 0 || n == 1)    // n = 0 或 1 时，n! = 1
        f = 1;
    else
        f = fac(n - 1) * n;    // n > 1 时，n! = n * (n - 1)!
    return(f);
}
