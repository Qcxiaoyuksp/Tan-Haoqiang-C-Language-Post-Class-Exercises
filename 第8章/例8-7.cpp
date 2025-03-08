#include <stdio.h>

int main()
{
    int *p, i, a[10];
    p = a; // p 指向 a[0]

    printf("please enter 10 integer numbers: "); // 提示输入
    for (i = 0; i < 10; i++)
        scanf("%d", p++); // 输入 10 个整数给 a[0]~a[9]

    p = a; // 重置指针 p，使其重新指向 a[0]
    for (i = 0; i < 10; i++, p++)
        printf("%d ", *p); // 输出 a[0]~a[9]

    printf("\n"); // 换行
    return 0;
}
