#include <stdio.h>
#include <math.h>    //程序中用到数学函数 fabs, 应包含头文件 math.h

int main()
{
    int sign = 1;    // sign 用来表示数值的符号
    double pi = 0.0, n = 1.0, term = 1.0;    // pi 开始代表多项式的值,最后代表 π 的值, n 代表分母,
    										// term 代表当前项的值

    while (fabs(term) >= 1e-6)    // 检查当前项 term 的绝对值是否大于或等于 10^{-6}
    {
        pi = pi + term;    // 把当前项 term 累加到 pi 中
        n = n + 2;    // n+2 是下一项的分母
        sign = -sign;    // sign 代表符号,下一项的符号与上一项符号相反
        term = sign / n;    // 求出下一项的值 term
    }

    pi = pi * 4;    // 多项式的和 pi 乘以 4,才是 π 的近似值
    printf("pi=%10.8f\n", pi);    // 输出 π 的近似值

    return 0;
}
