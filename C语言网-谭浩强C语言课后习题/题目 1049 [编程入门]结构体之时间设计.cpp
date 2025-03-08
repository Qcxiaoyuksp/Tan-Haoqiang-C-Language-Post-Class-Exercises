#include <stdio.h>

struct Date {
	int year;
	int month;
	int day;
};

int leap(int x) {
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	return 0;
}

int main() {
	struct Date date;
	scanf("%d%d%d", &date.year, &date.month, &date.day);
	
	int sum = 0;
	for (int i = 1; i < date.month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			sum += 31;
		else if (i == 2) {
			if (leap(date.year))
				sum += 29;
			else
				sum += 28;
		}			
		else 
			sum += 30;
	}
	
	sum += date.day;
	
	printf("%d", sum);
	
	return 0;
}
