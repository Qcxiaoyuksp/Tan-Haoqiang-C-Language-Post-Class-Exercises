#include <stdio.h>

int main()
{
    int fac(int n);
    int i;
    for (i = 1; i <= 5; i++)
        printf("%d! = %d\n", i, fac(i)); // 先后 5 次调用 fac 函数，每次计算并输出 i! 的值
    return 0;
}

int fac(int n)
{
    static int f = 1; // f 保留了上次调用结束时的值
    f = f * n;        // 在上次的 f 值的基础上再乘以 n
    return (f);       // 返回值 f 是 n! 的值
}
