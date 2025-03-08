#include <stdio.h>

int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	
	double sum = m, f = m;
	f = f * 0.5;
	for (int i = 2; i <= n; i++) {
		sum += 2 * f;
		f = f * 0.5;
	}
	printf("%.2f %.2f", f, sum);
	
	return 0;
}
