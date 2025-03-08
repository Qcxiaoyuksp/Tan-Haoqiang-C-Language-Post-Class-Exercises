#include <stdio.h>
#include <cstring>

int main() {
	int alpha = 0, digit = 0, space = 0, else_ = 0;
	char s[210];
//	gets(s);
	scanf("%s", s);
	
	for (int i = 0; i < strlen(s); i++) {
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			alpha++;
		else if (s[i] >= '0' && s[i] <= '9')
			digit++;
		else if (s[i] == ' ')
			space++;
		else 
			else_++;
	}
	
	printf("%d %d %d %d", alpha, digit, space, else_);
	
	return 0;
}
