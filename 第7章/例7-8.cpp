#include <stdio.h>

int main()
{
    void hanoi(int n, char one, char two, char three); // �� hanoi ����������
    int m;

    printf("input the number of diskes: "); // ��ʾ����
    scanf("%d", &m);                        // �������ӵ�����
    printf("The step to move %d diskes:\n", m);
    hanoi(m, 'A', 'B', 'C');                // ���� hanoi ����

    return 0;
}

void hanoi(int n, char one, char two, char three) // ���� hanoi ����
// �� n ���̴� one ������ two �����Ƶ� three ��
{
    void move(char x, char y); // �� move ����������

    if (n == 1)
        move(one, three);      // ���ֻ��һ�����ӣ�ֱ���ƶ���Ŀ����
    else
    {
        hanoi(n - 1, one, three, two); // �� n-1 ���̴� one ������ three �����Ƶ� two ��
        move(one, three);              // ���� n ���̴� one ���Ƶ� three ��
        hanoi(n - 1, two, one, three); // �� n-1 ���̴� two ������ one �����Ƶ� three ��
    }
}

void move(char x, char y)    // ���� move ����
{
    printf("%c->%c\n", x, y); // ����ƶ�����
}
