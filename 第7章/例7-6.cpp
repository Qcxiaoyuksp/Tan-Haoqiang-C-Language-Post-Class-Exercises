#include <stdio.h>

int main()
{
    int age(int n);    // 对 age 函数的声明
    printf("NO.5, age:%d\n", age(5));    // 输出第 5 个学生的年龄
    return 0;
}

int age(int n)    // 定义递归函数
{
    int c;
    if (n == 1)    // 如果 n 等于 1
        c = 10;    // 年龄为 10
    else           // 如果 n 不等于 1
        c = age(n - 1) + 2;    // 年龄是前一个学生的年龄加 2

    return(c);    // 返回年龄
}
