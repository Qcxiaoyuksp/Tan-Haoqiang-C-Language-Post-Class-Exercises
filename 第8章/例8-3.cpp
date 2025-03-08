#include <stdio.h>

void swap(int *p1, int *p2); // 对 swap 函数的声明

int main()
{
    int a, b;
    int *pointer_1, *pointer_2;

    printf("please enter a and b: ");
    scanf("%d,%d", &a, &b); // 输入两个整数

    pointer_1 = &a; // 使 pointer_1 指向 a
    pointer_2 = &b; // 使 pointer_2 指向 b

    if (a < b) swap(pointer_1, pointer_2); // 如果 a < b, 调用 swap 函数

    printf("max = %d, min = %d\n", a, b); // 输出结果
    return 0;
}

void swap(int *p1, int *p2) // 定义 swap 函数
{
    int temp;
    temp = *p1; // 使 *p1 和 *p2 互换
    *p1 = *p2;
    *p2 = temp;
}
