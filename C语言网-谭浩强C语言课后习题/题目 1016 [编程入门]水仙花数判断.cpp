#include <stdio.h>

int main() {
	int a, b, c;
	for (int i = 100; i <= 999; i++) {
		int j = i;
		a = j % 10;
		j /= 10;
		b = j % 10;
		j /= 10;
		c = j;
		
		if (a * a * a + b * b * b + c * c * c == i)
			printf("%d\n", i);
	}	
	
	return 0;
}
