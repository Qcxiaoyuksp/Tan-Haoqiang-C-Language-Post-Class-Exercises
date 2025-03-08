#include <stdio.h>
#include <string.h>

void reverse(char *str) {
	for (int i = 0, j = strlen(str) - 1; i < strlen(str) / 2; i++, j--) {
		char t = str[i];
		str[i] = str[j];
		str[j] = t;
	}
}

int main() {
	char str[100];
	scanf("%s", str);
	
	reverse(str);
	printf("%s", str);
	
	return 0;
}
