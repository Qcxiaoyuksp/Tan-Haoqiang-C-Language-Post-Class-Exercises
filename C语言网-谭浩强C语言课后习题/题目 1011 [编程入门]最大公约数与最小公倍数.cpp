#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	
	if (a > b)
		a = b;
	int c;
	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			c = i;
			break;		
		}
	}
	
	printf("%d %d", c, a * b / c);
	
	return 0;
}
