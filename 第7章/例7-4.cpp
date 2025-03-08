#include <stdio.h>

int main()
{
    float add(float x, float y);    // 对 add 函数作声明
    float a, b, c;

    printf("Please enter a and b:");    // 提示输入
    scanf("%f, %f", &a, &b);            // 输入两个实数
    c = add(a, b);                      // 调用 add 函数
    printf("sum is %f\n", c);           // 输出两数之和

    return 0;
}

float add(float x, float y)    // 定义 add 函数
{
    float z;
    z = x + y;                 // 计算 x 和 y 的和
    return(z);                 // 把变量 z 的值作为函数值返回
}
