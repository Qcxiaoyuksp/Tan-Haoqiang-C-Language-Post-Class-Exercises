#include <stdio.h>

#define MODULO(a, b) do { \
	printf("%d", a % b);  \
} while (0)

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	
	MODULO(a, b);
	
	return 0;
}
