#include <stdio.h>
#include <math.h>

void fenli(int n) {
	for (int i = 3; i >= 0; i--) {
		printf("%d ", n / (int)pow(10, i));
		n = n % (int)pow(10, i);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	
	fenli(n);
	
	return 0;
}
