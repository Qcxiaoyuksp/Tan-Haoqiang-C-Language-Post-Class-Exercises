#include <stdio.h> // ������׼���������

int A; // �����ⲿ����

int main() // ������
{
    int power(int); // ��������
    int b = 3, c, d, m;
    printf("enter the number a and its power m:\n");
    scanf("%d %d", &A, &m); // �������� a �������� m
    c = A * b; // ���� A �� 3 �ĳ˻�
    printf("%d * %d = %d\n", A, b, c); // ������
    d = power(m); // ���� power �������� A �� m ����
    printf("%d ** %d = %d\n", A, m, d); // ������
    return 0;
}
