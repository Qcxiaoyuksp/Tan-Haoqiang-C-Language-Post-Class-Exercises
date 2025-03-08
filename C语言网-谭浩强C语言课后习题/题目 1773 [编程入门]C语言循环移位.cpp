#include <stdio.h>

int main() {
	unsigned int a;
	int n;
	scanf("%u%d", &a, &n);
	
	// 通过 (num >> shift) 将 num 右移 shift 位，\
	再通过 (num << (size - shift)) 将 num 左移 size - shift 位，\
	最后使用按位或运算符 | 将两部分合并。
	printf("%u", (a >> n) | (a << (32 - n)));
	
	return 0;
} 
