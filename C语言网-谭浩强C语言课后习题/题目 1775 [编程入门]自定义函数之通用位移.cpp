#include <stdio.h>

unsigned move(unsigned v, int n) {
	if (n > 0) {
		return (v >> n) | (v << (32 - n));
	}
	else if (n < 0) {
		return (v << -n) | (v >> (32 + n));
	}
}

int main() {
	unsigned value;
	int n;
	scanf("%u%d", &value, &n);
	
	printf("%u", move(value, n));
	
	return 0;
} 
