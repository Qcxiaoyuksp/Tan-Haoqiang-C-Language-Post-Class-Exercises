#include <stdio.h>

int f(int); // ��������

int main()
{
    int a = 2; // �Զ��ֲ�����
    for (int i = 0; i < 3; i++)
        printf("%d\n", f(a)); // ��� f(a) ��ֵ
    return 0;
}

int f(int a)
{
    auto b = 0; // �Զ��ֲ�����
    static int c = 3; // ��̬�ֲ�����
    b = b + 1;
    c = c + 1;
    return (a + b + c);
}
