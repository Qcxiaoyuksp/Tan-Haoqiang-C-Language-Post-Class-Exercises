#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	
	int t = num, weishu = 0;
	for (t = num; t > 0; t /= 10)
		weishu++;
//	while (t > 0) {
//		weishu++;
//		t /= 10;
//	}
	printf("%d\n", weishu);
	
	int weiquan = 1;
	for (int i = 0; i < weishu - 1; i++)
		weiquan *= 10; 
//	while (t >= 10) {
//		weiquan *= 10;
//		t /= 10;
//	}
	t = num;
	int weizhi;
	while (t > 0) {
		weizhi = t / weiquan;
		printf("%d ", weizhi);
		t %= weiquan;
		weiquan /= 10;
	}
	printf("\n");
	
	t = num;
	int nixu;
	while (t > 0) {
		nixu = t % 10;
		printf("%d", nixu);
		t /= 10;
	}
	
	return 0;
}
