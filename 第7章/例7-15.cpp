#include <stdio.h>

int a = 3, b = 5; // a, b 是全局变量

int main()
{
    int max(int a, int b); // 函数声明。a, b 是形参
    int a = 8;             // a 是局部变量

    printf("max=%d\n", max(a, b)); // 局部变量 a 的作用范围
    return 0;                      // 全局变量 b 的作用范围
}

int max(int a, int b) // a, b 是函数形参
{
    int c;
    c = a > b ? a : b; // 把 a 和 b 中的大者存放在 c 中
    return(c);
}
