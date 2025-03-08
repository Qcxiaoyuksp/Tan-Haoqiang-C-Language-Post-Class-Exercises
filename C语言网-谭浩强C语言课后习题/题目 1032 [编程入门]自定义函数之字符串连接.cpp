#include <stdio.h>
#include <string.h>

void strcat1(char *str1, char *str2) {
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	for (int i = 0; str2[i] != '\0'; i++)
		str1[i + l1] = str2[i];
	str1[l1 + l2] = '\0';
}

int main() {
	char str1[100];
	char str2[100];
	scanf("%s%s", str1, str2);
	
	strcat1(str1, str2);
	printf("%s", str1);
	
	return 0;
}
