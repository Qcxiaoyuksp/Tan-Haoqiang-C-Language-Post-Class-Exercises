#include <stdio.h>

int n, m;
int a[100];
int b[100];

void houyi() {
	for (int i = 0; i < n; i++) {
		b[(m + i) % n] = a[i];
	}
}

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	
	houyi();
	for (int i = 0; i < n; i++)
		printf("%d ", b[i]);
	
	return 0;
} 
