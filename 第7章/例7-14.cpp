#include <stdio.h>

float Max = 0, Min = 0; // ����ȫ�ֱ��� Max, Min

int main()
{
    float average(float array[], int n); // ��������
    float ave, score[10];
    int i;

    printf("Please enter 10 scores: "); // ��ʾ����
    for (i = 0; i < 10; i++)
        scanf("%f", &score[i]);        // ���� 10 ������

    ave = average(score, 10);          // ���� average ����
    printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave); // ������ֵ����Сֵ��ƽ��ֵ

    return 0;
}

float average(float array[], int n) // ���庯������һ���β�������
{
    int i;
    float aver, sum = array[0];
    Max = Min = array[0]; // ��ʼ�� Max �� Min

    for (i = 1; i < n; i++)
    {
        if (array[i] > Max) // �����ǰԪ�ش��� Max������ Max
            Max = array[i];
        else if (array[i] < Min) // �����ǰԪ��С�� Min������ Min
            Min = array[i];

        sum = sum + array[i]; // �ۼӷ���
    }

    aver = sum / n; // ����ƽ��ֵ
    return(aver);   // ����ƽ��ֵ
}
