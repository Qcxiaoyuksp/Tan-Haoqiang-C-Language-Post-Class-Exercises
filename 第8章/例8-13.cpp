#include <stdio.h>
int main()
{
    int a[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23}; // 定义二维数组 a 并初始化
    int (*p)[4], i, j; // 指针变量 p 指向包含 4 个整型元素的一维数组
    p = a; // p 指向二维数组的 0 行
    printf("please enter row and column:");
    scanf("%d, %d", &i, &j); // 输入要求输出的元素的行列号
    printf("a[%d, %d] = %d\n", i, j, *( * (p + i) + j)); // 输出 a[i][j] 的值
    return 0;
}
