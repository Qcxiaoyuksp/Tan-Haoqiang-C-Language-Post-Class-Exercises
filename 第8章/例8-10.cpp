#include <stdio.h>

int main()
{
    void sort(int x[],int n); // sort 函数声明
    int i, * p, a[10];
    p = a; // 指针变量 p 指向 a[0]
    printf("please enter 10 integer numbers:");
    for(i = 0; i < 10; i++)
        scanf("%d", p++); // 输入 10 个整数
    p = a; // 指针变量 p 重新指向 a[0]
    sort(p, 10); // 调用 sort 函数
    for(p = a, i = 0; i < 10; i++)
    {
        printf("%d ", * p);
        p++;
    }
    printf("\n");
    return 0;
}

void sort(int x[], int n) // 定义 sort 函数, x 是形参数组名
{
    int i, j, k, t;
    for(i = 0; i < n - 1; i++)
    {
        k = i;
        for(j = i + 1; j < n; j++)
            if(x[j] > x[k]) k = j;
        if(k != i)
        {
            t = x[i]; x[i] = x[k]; x[k] = t;
        }
    }
}
