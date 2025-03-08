#include <stdio.h>

int main()
{
    void inv(int * x,int n); // inv 函数声明
    int i,arr[10], * p = arr; // 指针变量 p 指向 arr[0]
    printf("The original array:\n");
    for(i=0;i<10;i++,p++)
        scanf("%d",p); // 输入 arr 数组的元素
    printf("\n");
    p = arr; // 指针变量 p 重新指向 arr[0]
    inv(p,10); // 调用 inv 函数, 实参 p 是指针变量
    printf("The array has been inverted:\n");
    for(p=arr;p<arr+10;p++)
        printf("%d ", * p);
    printf("\n");
    return 0;
}

void inv(int * x,int n) // 定义 inv 函数, 形参 x 是指针变量
{
    int * p,m,temp, * i, * j;
    m = (n-1)/2;
    i = x; j = x+n-1; p = x+m;
    for(;i<=p;i++,j--)
    {
        temp = * i; * i = * j; * j = temp;
    }
    return;
}
