#include <stdio.h>

int main()
{
    int *p1, *p2, *p, a, b;
    printf("please enter two integer numbers: "); // 提示用户输入两个整数
    scanf("%d,%d", &a, &b); // 输入两个整数

    p1 = &a; // 使 p1 指向变量 a
    p2 = &b; // 使 p2 指向变量 b

    if (a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p; // 使 p1 与 p2 的值互换
    }

    printf("a = %d, b = %d\n", a, b); // 输出 a, b
    printf("max = %d, min = %d\n", *p1, *p2); // 输出 p1 和 p2 所指向的变量的值
    return 0;
}
