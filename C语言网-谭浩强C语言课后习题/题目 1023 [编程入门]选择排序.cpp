#include <stdio.h>

int main() {
	int a[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	
	for (int i = 0; i < 9; i++) {
		int p = i;
		for (int j = i + 1; j < 10; j++) {
			if (a[p] > a[j])
				p = j;
		}
		int temp = a[p];
		a[p] = a[i];
		a[i] = temp;
	}
	
	for (int i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	
	return 0;
}
