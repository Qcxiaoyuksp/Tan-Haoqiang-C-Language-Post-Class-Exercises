#include <stdio.h> // 包含标准输入输出库

int A; // 定义外部变量

int main() // 主函数
{
    int power(int); // 函数声明
    int b = 3, c, d, m;
    printf("enter the number a and its power m:\n");
    scanf("%d %d", &A, &m); // 输入数字 a 和它的幂 m
    c = A * b; // 计算 A 和 3 的乘积
    printf("%d * %d = %d\n", A, b, c); // 输出结果
    d = power(m); // 调用 power 函数计算 A 的 m 次幂
    printf("%d ** %d = %d\n", A, m, d); // 输出结果
    return 0;
}
