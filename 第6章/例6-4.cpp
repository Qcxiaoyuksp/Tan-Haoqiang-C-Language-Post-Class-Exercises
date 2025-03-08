#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2], i, j;

    printf("array a:\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%5d", a[i][j]); // 输出 a 数组的一个元素
            b[j][i] = a[i][j];      // 将 a 数组元素的值赋给 b 数组相应元素
        }
        printf("\n");
    }

    printf("array b:\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%5d", b[i][j]); // 输出 b 数组的一个元素
        }
        printf("\n");
    }

    return 0;
}
