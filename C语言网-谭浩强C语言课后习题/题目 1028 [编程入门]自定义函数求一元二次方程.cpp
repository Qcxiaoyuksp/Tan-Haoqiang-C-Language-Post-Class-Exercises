#include <stdio.h>
#include <math.h>

void dayu(double a, double b, double c) {
	double disc = b * b - 4 * a * c;
	double x1 = (-b + sqrt(disc)) / (2 * a);
	double x2 = (-b - sqrt(disc)) / (2 * a);
	
	printf("x1=%.3f x2=%.3f", x1, x2);
}

void dengyu(double a, double b, double c) {
	double x = (-b) / (2 * a);
	
	printf("x1=%.3f x2=%.3f", x, x);
}

void xiaoyu(double a, double b, double c) {
	double disc = b * b - 4 * a * c;
	double fact = (-b) / (2 * a);
	double image = (sqrt(-disc)) / (2 * a);
	
	printf("x1=%.3f+%.3fi x2=%.3f-%.3fi", fact, image, fact, image);
}

int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double disc = b * b - 4 * a * c;
	if (disc > 0)
		dayu(a, b, c);
	else if (disc == 0)
		dengyu(a, b, c);
	else 
		xiaoyu(a, b, c);
	
	return 0;
}
