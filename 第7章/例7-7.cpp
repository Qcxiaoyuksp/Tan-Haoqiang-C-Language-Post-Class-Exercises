#include <stdio.h>

int main()
{
    int fac(int n);    // fac ��������
    int n;
    int y;

    printf("input an integer number: "); // ��ʾ����
    scanf("%d", &n);                     // ����Ҫ��׳˵���
    y = fac(n);                          // ���� fac ��������׳�
    printf("%d! = %d\n", n, y);          // ����׳˽��

    return 0;
}

int fac(int n)    // ���� fac ����
{
    int f;
    if (n < 0)    // n ����С�� 0
        printf("n < 0, data error!");
    else if (n == 0 || n == 1)    // n = 0 �� 1 ʱ��n! = 1
        f = 1;
    else
        f = fac(n - 1) * n;    // n > 1 ʱ��n! = n * (n - 1)!
    return(f);
}
