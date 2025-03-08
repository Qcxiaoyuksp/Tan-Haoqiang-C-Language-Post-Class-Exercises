#include <stdio.h>

int main()
{
    int max4(int a, int b, int c, int d);    // 对 max4 的函数声明
    int a, b, c, d, max;

    printf("Please enter 4 integer numbers:"); // 提示输入 4 个数
    scanf("%d %d %d %d", &a, &b, &c, &d);      // 输入 4 个数
    max = max4(a, b, c, d);                    // 调用 max4 函数，得到 4 个数中的最大者
    printf("max=%d \n", max);                  // 输出 4 个数中的最大者

    return 0;
}

int max4(int a, int b, int c, int d)    // 定义 max4 函数
{
    int max2(int a, int b);             // 对 max2 的函数声明
    int m;

    m = max2(a, b);    // 调用 max2 函数，得到 a 和 b 两个数中的大者，放在 m 中
    m = max2(m, c);    // 调用 max2 函数，得到 a, b, c 3 个数中的大者，放在 m 中
    m = max2(m, d);    // 调用 max2 函数，得到 a, b, c, d 4 个数中的大者，放在 m 中

    return(m);
}

int max2(int a, int b)    // 定义 max2 函数
{
    if (a >= b)
        return a;    // 若 a≥b，将 a 作为函数返回值
    else
        return b;    // 若 a<b，将 b 作为函数返回值
}
