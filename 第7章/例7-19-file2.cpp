extern A; // ���� file1 �ļ����Ѷ�����ⲿ��������������չ�����ļ�

int power(int n) // ���� A �� n ����
{
    int i, y = 1;
    for (i = 1; i <= n; i++)
        y *= A; // ѭ������ A �� n ����
    return (y); // ���ؽ��
}
