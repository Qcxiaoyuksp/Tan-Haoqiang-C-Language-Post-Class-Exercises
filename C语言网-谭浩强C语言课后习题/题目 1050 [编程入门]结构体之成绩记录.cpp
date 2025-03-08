#include <stdio.h>

const int N = 100;

struct Student {
	char num[20];
	char name[20];
	int grade[3];
};

typedef struct Student STU;

void input(STU student[], int i) {
	scanf("%s%s%d%d%d", student[i].num, student[i].name, 
	&student[i].grade[0], &student[i].grade[1], &student[i].grade[2]);
}

void print(STU student[], int i) {
	printf("%s,%s,%d,%d,%d\n", student[i].num, student[i].name, 
	student[i].grade[0], student[i].grade[1], student[i].grade[2]);
}

int main() {
	int n;
	scanf("%d", &n);
	STU student[N];
	
	for (int i = 0; i < n; i++){
		input(student, i);
	}
	
	for (int i = 0; i < n; i++){
		print(student, i);
	}
	
	return 0;
}
