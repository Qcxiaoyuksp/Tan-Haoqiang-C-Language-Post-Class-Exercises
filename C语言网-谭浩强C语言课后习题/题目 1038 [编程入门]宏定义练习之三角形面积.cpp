#include <stdio.h>
#include <math.h>

#define S(a, b, c) do {		\
	s = (a + b + c) / 2.0;	\
} while (0)

#define AREA(s, a, b, c) do {	\
	area = sqrt((s * (s - a) * (s - b) * (s - c)));	\
} while (0)

int main() {
	double a, b, c, s, area;
	scanf("%lf%lf%lf", &a, &b, &c);
	S(a, b, c);
	AREA(s, a, b, c);
	
	printf("%.3f", area);
	
	return 0;
}
