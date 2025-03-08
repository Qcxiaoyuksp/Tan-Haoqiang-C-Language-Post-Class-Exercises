#include <stdio.h>

#define N 100
//const int N = 100;

struct Student {
	char num[20];
	char name[20];
	int grade[3];
};

int main() {
	int n;
	scanf("%d", &n);
	struct Student student[N];
	
	int total[N] = {0}, s1 = 0, s2 = 0, s3 = 0;
	int max = 0, k;
	for (int i = 0; i < n; i++){
		scanf("%s%s%d%d%d", student[i].num, student[i].name, 
		&student[i].grade[0], &student[i].grade[1], &student[i].grade[2]);
		
		total[i] = student[i].grade[0] + student[i].grade[1] + student[i].grade[2];
		if (total[i] > max) {
			max = total[i];
			k = i;
		}
		
		s1 += student[i].grade[0];
		s2 += student[i].grade[1];
		s3 += student[i].grade[2];
	}
	
	printf("%d %d %d\n", s1 / n, s2 / n, s3 / n);
		
	printf("%s %s %d %d %d\n", student[k].num, student[k].name, 
	student[k].grade[0], student[k].grade[1], student[k].grade[2]);
	
	return 0;
}
