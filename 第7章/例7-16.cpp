#include <stdio.h>

int f(int); // 函数声明

int main()
{
    int a = 2; // 自动局部变量
    for (int i = 0; i < 3; i++)
        printf("%d\n", f(a)); // 输出 f(a) 的值
    return 0;
}

int f(int a)
{
    auto b = 0; // 自动局部变量
    static int c = 3; // 静态局部变量
    b = b + 1;
    c = c + 1;
    return (a + b + c);
}
