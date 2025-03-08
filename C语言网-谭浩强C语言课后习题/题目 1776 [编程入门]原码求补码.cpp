#include <stdio.h>
#include <string.h>

int strToInt(char *str) {
	int sum = 0;
	for (int i = 0; i < strlen(str); i++) {
		sum <<= 1;
		if (str[i] == '1')
			sum |= 1;
	}
	return sum;
}

int oriToCom(int ori) {
	if (ori >> 15) {
		int x = (1 << 15) - 1;
		int t = x ^ ori;  // 怎么取反：二进制跟1异或 
		int com = (1 << 15) | (t + 1);
		return com;
	}
	else {
		return ori;
	}
}

int main() {
	char str[16];
	scanf("%s", str);
	int original = strToInt(str);
	int complement = oriToCom(original);
	
	for (int i = 15; i >= 0; i--)
		printf("%d", (complement>>i) & 1);
	
	return 0;
}
