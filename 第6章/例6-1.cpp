#include <stdio.h>

int main()
{
    int i, a[10];
    for (i = 0; i <= 9; i++)
        // 对数组元素 a[0]~a[9]赋值
        a[i] = i;
    for (i = 9; i >= 0; i--)
        // 输出 a[9]~a[0]共 10 个数组元素
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
