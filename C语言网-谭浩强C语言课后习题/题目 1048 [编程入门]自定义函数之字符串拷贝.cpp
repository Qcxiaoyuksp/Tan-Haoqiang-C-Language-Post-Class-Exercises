#include <stdio.h>

int main() {
	int n, m;
	char str[100];
	scanf("%d", &n);
	scanf("%s", str);
	scanf("%d", &m);
	for (int i = m - 1; i < n; i++) {
		printf("%c", str[i]);
	}
	
	return 0;
}
