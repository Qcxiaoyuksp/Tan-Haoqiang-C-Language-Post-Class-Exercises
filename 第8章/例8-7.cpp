#include <stdio.h>

int main()
{
    int *p, i, a[10];
    p = a; // p ָ�� a[0]

    printf("please enter 10 integer numbers: "); // ��ʾ����
    for (i = 0; i < 10; i++)
        scanf("%d", p++); // ���� 10 �������� a[0]~a[9]

    p = a; // ����ָ�� p��ʹ������ָ�� a[0]
    for (i = 0; i < 10; i++, p++)
        printf("%d ", *p); // ��� a[0]~a[9]

    printf("\n"); // ����
    return 0;
}
