#include <stdio.h>

int main()
{
    int max(float x, float y); // ���� max ����������Ϊ���� float ����
    float a, b;
    int c;

    scanf("%f, %f", &a, &b); // ��������������
    c = max(a, b);           // ���� max ������������ֵ���� c
    printf("max is %d\n", c); // ������ֵ

    return 0;
}

int max(float x, float y)
{
    float z;    // z Ϊʵ�ͱ���
    z = x > y ? x : y; // �Ƚ� x �� y�����ϴ��ֵ���� z
    return(z);  // ���� z ��ֵ
}
