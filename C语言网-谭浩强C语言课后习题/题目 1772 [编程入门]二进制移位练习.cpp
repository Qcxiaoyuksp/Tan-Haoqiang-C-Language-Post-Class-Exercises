#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	for (int i = 7; i >= 4; i--) { // 这里也要注意，必须从高位往低位循环 
		sum = sum * 2 + (n >> i & 1);  // 注意要加上括号，因为 + 的优先级比 >> 高 
	}
	
	printf("%d", sum);
	
	return 0;
}
