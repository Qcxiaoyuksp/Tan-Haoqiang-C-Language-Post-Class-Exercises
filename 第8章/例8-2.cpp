#include <stdio.h>

int main()
{
    int *p1, *p2, *p, a, b;
    printf("please enter two integer numbers: "); // ��ʾ�û�������������
    scanf("%d,%d", &a, &b); // ������������

    p1 = &a; // ʹ p1 ָ����� a
    p2 = &b; // ʹ p2 ָ����� b

    if (a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p; // ʹ p1 �� p2 ��ֵ����
    }

    printf("a = %d, b = %d\n", a, b); // ��� a, b
    printf("max = %d, min = %d\n", *p1, *p2); // ��� p1 �� p2 ��ָ��ı�����ֵ
    return 0;
}
