#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	for (int i = 7; i >= 4; i--) { // ����ҲҪע�⣬����Ӹ�λ����λѭ�� 
		sum = sum * 2 + (n >> i & 1);  // ע��Ҫ�������ţ���Ϊ + �����ȼ��� >> �� 
	}
	
	printf("%d", sum);
	
	return 0;
}
