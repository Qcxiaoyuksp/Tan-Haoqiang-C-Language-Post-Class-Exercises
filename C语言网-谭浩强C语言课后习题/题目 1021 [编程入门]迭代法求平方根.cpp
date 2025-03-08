#include <stdio.h>
#include <math.h>

int main() {
	double a;
	scanf("%lf", &a);
	double x = a;
	
	double y = (x + a / x) / 2.0;
	while (fabs(y - x) >= 0.00001) {
		x = y;
		y = (x + a / x) / 2.0;
	}
	
	printf("%.3f", y);
	
	return 0;
}
