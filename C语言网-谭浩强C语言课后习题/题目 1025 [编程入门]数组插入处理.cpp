#include <stdio.h>

int main() {
	int a[10];
	int b;
	for (int i = 0; i < 9; i++) 
		scanf("%d", &a[i]);
	scanf("%d", &b);
	
	for (int i = 8; i >= 0; i--) {	
		if (a[i] <= b) {
			a[i + 1] = b;
			break;
		}
		a[i + 1] = a[i];
	}
	
	for (int i = 0; i < 10; i++)
		printf("%d\n", a[i]);
	
	return 0;
}
