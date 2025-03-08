#include <stdio.h>
#include <string.h>

void tiqu(char *str) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			printf("%c", str[i]);
		}
	}
}

int main() {
	char str[100];
	scanf("%s", str);
	
	tiqu(str);
	
	return 0;
} 
