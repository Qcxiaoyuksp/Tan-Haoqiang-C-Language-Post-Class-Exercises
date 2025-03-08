#include <stdio.h>

int max(int x, int y)    // 定义 max 函数，有两个参数
{
    int z;               // 定义临时变量 z
    z = x > y ? x : y;   // 把 x 和 y 中的大者赋给 z
    return(z);           // 把 z 作为 max 函数的值带回 main 函数
}

int main()
{
    int max(int x, int y);    // 对 max 函数的声明
    int a, b, c;

    printf("please enter two integer numbers:"); // 提示输入数据
    scanf("%d, %d", &a, &b);                     // 输入两个整数

    c = max(a, b);                               // 调用 max 函数，有两个实参。大数赋给变量 c
    printf("max is %d\n", c);                    // 输出大数 c

    return 0;
}
