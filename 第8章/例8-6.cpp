//// �±귨 
//#include <stdio.h>
//
//int main()
//{
//    int a[10];
//    int i;
//
//    printf("please enter 10 integer numbers: "); // ��ʾ����
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);                      // ���� 10 ������
//
//    for (i = 0; i < 10; i++)
//        printf("%d ", a[i]);                     // �������Ԫ�أ������������±��ʾ
//
//    printf("\n"); // ����
//    return 0;
//}

//// ͨ����������������Ԫ��
//#include <stdio.h>
//
//int main()
//{
//    int a[10];
//    int i;
//
//    printf("please enter 10 integer numbers: "); // ��ʾ����
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);                      // ���� 10 ������
//
//    for (i = 0; i < 10; i++)
//        printf("%d ", *(a + i));                 // ͨ����������Ԫ����ż���Ԫ�ص�ַ�����ҵ���Ԫ��
//
//    printf("\n"); // ����
//    return 0;
//}

// ��ָ�����ָ������Ԫ��
#include <stdio.h>

int main()
{
    int a[10];
    int *p, i; // ����ָ����� p �����ͱ��� i

    printf("please enter 10 integer numbers: "); // ��ʾ����
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);                      // ���� 10 ������

    for (p = a; p < (a + 10); p++)               // ��ָ�� p ��������
        printf("%d ", *p);                       // ���ָ�� p ָ�������Ԫ��

    printf("\n"); // ����
    return 0;
}
