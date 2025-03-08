#include <stdio.h>

unsigned getbits(int a, int n1, int n2) {
	unsigned b = 0;
	for (int i = n1; i <= n2; i++) {
		b = b | (1 << i);            // �������ص�1 
	}
	return a & b;                    // �������ص�2 
}

int main() {
	unsigned value;
	int n1, n2;
	scanf("%u%d%d", &value, &n1, &n2);
	
	printf("%u", getbits(value, n1, n2));
	
	return 0;
}
