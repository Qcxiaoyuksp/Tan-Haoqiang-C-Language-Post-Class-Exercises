#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int sum = 1;
	for (int i = 1; i < n; i++) {
		sum = 2 * sum + 2;
	}
	
	printf("%d", sum);
	
	return 0;
}
