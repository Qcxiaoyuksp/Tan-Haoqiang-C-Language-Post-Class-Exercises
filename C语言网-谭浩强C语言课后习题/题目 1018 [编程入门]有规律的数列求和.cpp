#include <stdio.h>

int main() {
	int a1 = 2, a2 = 3, b1 = 1, b2 = 2;
	double sum = 0;
	
	int n;
	scanf("%d", &n);
	double f1 = a1 * 1.0 / b1;
	double f2 = f1 + a2 * 1.0 / b2;
	
	if (n == 1) 
		printf("%.2f", f1);
	else if (n == 2)
		printf("%.2f", f2);
	else {
		for (int i = 3; i <= n; i++) {
			int t1 = a1;
			a1 = a2;
			a2 = a1 + t1;
			int t2 = b1;
			b1 = b2;
			b2 = b1 + t2;
			
			f1 = f2;
			f2 = f1 + a2 * 1.0 / b2;
		}
		printf("%.2f", f2);
	}
	
	return 0;
} 
