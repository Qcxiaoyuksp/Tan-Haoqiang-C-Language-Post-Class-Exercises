#include <stdio.h>

int main() {
	int a[3][3];
	int first = 0, second = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
			
			if (i == j)
				first += a[i][j];
			if (i + j == 2)
				second += a[i][j];
		}
	}
	
	printf("%d %d", first, second);
	
	return 0;
}
