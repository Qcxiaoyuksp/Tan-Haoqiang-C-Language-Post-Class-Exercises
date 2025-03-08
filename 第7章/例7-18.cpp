#include <stdio.h>

int max(); // 函数声明

int main()
{
    extern int A, B, C; // 把外部变量 A, B, C 的作用域扩展到此处开始
    printf("Please enter three integer numbers: ");
    scanf("%d %d %d", &A, &B, &C); // 输入 3 个整数给 A, B, C
    printf("max is %d\n", max()); // 输出 A, B, C 中的最大值
    return 0;
}

int A, B, C; // 定义外部变量 A, B, C

int max()
{
    int m;
    m = A > B ? A : B; // 把 A 和 B 中的大者放在 m 中
    if (C > m) m = C;  // 将 A, B, C 三者中的大者放在 m 中
    return (m); // 返回 m 的值
}
