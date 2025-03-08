#include <stdio.h>

int isPrime(int n) {
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	
	if (isPrime(n))
		printf("prime");
	else 
		printf("not prime");
	
	return 0;
}
