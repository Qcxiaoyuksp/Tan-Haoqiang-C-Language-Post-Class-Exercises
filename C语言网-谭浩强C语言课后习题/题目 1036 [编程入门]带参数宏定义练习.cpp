#include <stdio.h>

#define SWAP(a, b) do { \
	int temp = a; 		\
	a = b;				\
	b = temp;			\
} while (0)

int main() {
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	SWAP(a, b);
	
	printf("%d %d", a, b);
	
	return 0;
}
