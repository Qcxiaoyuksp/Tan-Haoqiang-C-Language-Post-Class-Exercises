#include <stdio.h>

double max(double a, double b, double c) {
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	if (a < c) {
		int t = a;
		a = c;
		c = t;
	}
	return a;
}

#define MAX(a, b, c) (a > b ? (a > c ? a : c) : (b > c ? b : c))

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	printf("%.3f\n", max(a, b, c));
	printf("%.3f", MAX(a, b, c));
	
	return 0;
}
