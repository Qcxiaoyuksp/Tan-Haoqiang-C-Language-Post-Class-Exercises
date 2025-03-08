#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = i / 2; j > 0; j--) {
			if (i % j == 0)
				sum += j;
		}
		if (sum == i) {
			printf("%d its factors are", i);
			for (int j = 1; j <= i / 2; j++)
				if (i % j == 0)
					printf(" %d", j);
			printf("\n");
		}
	}
	
	return 0;
}
