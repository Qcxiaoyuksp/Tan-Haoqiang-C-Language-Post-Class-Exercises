#include <stdio.h>

int main() {
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		a[i] = i + 1;
	
	int i = 0, j = 0, m = n; // i��¼��ǰ��λ�ã�j��¼��ǰ�������� 
	while (m > 1) {
		if (a[i % n]) {
			j++; // ������һ 
			if (j % 3 == 0) { // ɾ���������� 
				a[i % n] = 0;
				m--;
			}
			i++; // λ�ü�һ 
		}
		else // �������Ԫ��ֵ��0����ֱ��������������ʵ�־��ǣ�ֻ����λ��i�������ӱ���j�� 
			i++; // λ�ü�һ 
	}
	
	for (int i = 0; i < n; i++)
		if (a[i])
			printf("%d", a[i]);
	
	return 0;
}
