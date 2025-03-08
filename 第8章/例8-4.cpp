#include <stdio.h>

void swap(int *p1, int *p2); // 对 swap 函数的声明

int main()
{
    int a, b;
    int *pointer_1, *pointer_2; // pointer_1, pointer_2 是 int * 型变量

    printf("please enter two integer numbers: ");
    scanf("%d,%d", &a, &b); // 输入两个整数

    pointer_1 = &a; // 使 pointer_1 指向 a
    pointer_2 = &b; // 使 pointer_2 指向 b

    if (a < b) swap(pointer_1, pointer_2); // 调用 swap 函数，用指针变量作实参

    printf("max = %d, min = %d\n", *pointer_1, *pointer_2); // 输出结果
    return 0;
}

void swap(int *p1, int *p2) // 形参是指针变量
{
    int *p;
    p = p1;
    p1 = p2;
    p2 = p; // 下面 3 行交换 p1 和 p2 的指向
}
