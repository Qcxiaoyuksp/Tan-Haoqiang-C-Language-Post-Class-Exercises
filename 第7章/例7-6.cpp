#include <stdio.h>

int main()
{
    int age(int n);    // �� age ����������
    printf("NO.5, age:%d\n", age(5));    // ����� 5 ��ѧ��������
    return 0;
}

int age(int n)    // ����ݹ麯��
{
    int c;
    if (n == 1)    // ��� n ���� 1
        c = 10;    // ����Ϊ 10
    else           // ��� n ������ 1
        c = age(n - 1) + 2;    // ������ǰһ��ѧ��������� 2

    return(c);    // ��������
}
