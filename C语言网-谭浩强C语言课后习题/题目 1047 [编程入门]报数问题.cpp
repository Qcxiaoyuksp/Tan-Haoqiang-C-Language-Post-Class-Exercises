#include <stdio.h>

int main() {
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		a[i] = i + 1;
	
	int i = 0, j = 0, m = n; // i记录当前的位置，j记录当前报的数字 
	while (m > 1) {
		if (a[i % n]) {
			j++; // 报数加一 
			if (j % 3 == 0) { // 删除就是置零 
				a[i % n] = 0;
				m--;
			}
			i++; // 位置加一 
		}
		else // 如果数组元素值是0，就直接跳过（跳过的实现就是：只增加位置i，不增加报数j） 
			i++; // 位置加一 
	}
	
	for (int i = 0; i < n; i++)
		if (a[i])
			printf("%d", a[i]);
	
	return 0;
}
