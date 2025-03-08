#include <stdio.h>

int main()
{
    int max(float x, float y); // 声明 max 函数，参数为两个 float 类型
    float a, b;
    int c;

    scanf("%f, %f", &a, &b); // 输入两个浮点数
    c = max(a, b);           // 调用 max 函数，将返回值赋给 c
    printf("max is %d\n", c); // 输出最大值

    return 0;
}

int max(float x, float y)
{
    float z;    // z 为实型变量
    z = x > y ? x : y; // 比较 x 和 y，将较大的值赋给 z
    return(z);  // 返回 z 的值
}
