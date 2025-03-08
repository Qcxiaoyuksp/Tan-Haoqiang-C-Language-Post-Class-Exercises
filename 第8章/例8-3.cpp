#include <stdio.h>

void swap(int *p1, int *p2); // �� swap ����������

int main()
{
    int a, b;
    int *pointer_1, *pointer_2;

    printf("please enter a and b: ");
    scanf("%d,%d", &a, &b); // ������������

    pointer_1 = &a; // ʹ pointer_1 ָ�� a
    pointer_2 = &b; // ʹ pointer_2 ָ�� b

    if (a < b) swap(pointer_1, pointer_2); // ��� a < b, ���� swap ����

    printf("max = %d, min = %d\n", a, b); // ������
    return 0;
}

void swap(int *p1, int *p2) // ���� swap ����
{
    int temp;
    temp = *p1; // ʹ *p1 �� *p2 ����
    *p1 = *p2;
    *p2 = temp;
}
