#include <stdio.h>

int zdgys(int a, int b) {
	if (a > b)
		a = b;
	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0)
			return i;
	}
	return -1;
}

int zxgbs(int a, int b) {
	int c = zdgys(a, b);
	return a * b / c;
}

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	
	printf("%d %d", zdgys(a, b), zxgbs(a, b));
	
	return 0;
}
