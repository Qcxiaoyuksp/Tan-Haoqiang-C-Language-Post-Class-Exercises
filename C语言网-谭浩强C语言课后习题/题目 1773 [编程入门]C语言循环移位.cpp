#include <stdio.h>

int main() {
	unsigned int a;
	int n;
	scanf("%u%d", &a, &n);
	
	// ͨ�� (num >> shift) �� num ���� shift λ��\
	��ͨ�� (num << (size - shift)) �� num ���� size - shift λ��\
	���ʹ�ð�λ������� | �������ֺϲ���
	printf("%u", (a >> n) | (a << (32 - n)));
	
	return 0;
} 
