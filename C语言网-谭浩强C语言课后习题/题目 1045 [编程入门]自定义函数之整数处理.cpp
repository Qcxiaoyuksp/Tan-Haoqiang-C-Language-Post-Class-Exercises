#include <stdio.h>

int a[10];

void function1() {
	for (int i = 0; i < 10; i++) 
		scanf("%d", &a[i]);
}

void function2() {
	int min = a[0];
	int max = a[9];
	int mi = 0, ma = 9; // 需要比较的地方，注意要初始化 
	for (int i = 0; i < 10; i++) {
		if (a[i] < min) {
			min = a[i];
			mi = i;
		}
	}
	int t1 = a[0];
	a[0] = a[mi];
	a[mi] = t1;
	
	for (int i = 0; i < 10; i++) {
		if (a[i] > max) {
			max = a[i];
			ma = i;
		}
	}
	int t2 = a[9];
	a[9] = a[ma];
	a[ma] = t2;
}

void function3() {
	for (int i = 0; i < 10; i++) 
		printf("%d ", a[i]);
}

int main() {
	function1();
	function2();
	function3();
	
	return 0;
}
