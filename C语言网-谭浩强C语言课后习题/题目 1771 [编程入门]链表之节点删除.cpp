#include <stdio.h>
#include <stdlib.h>

typedef struct student{
	int id;
	int score;
	struct student *next;
}Student;

Student *create(int n) {
	Student *head = (Student *)malloc(sizeof(Student));
	Student *end = head;
	for (int i = 0; i < n; i++) {
		Student *node = (Student *)malloc(sizeof(Student));
		scanf("%d%d", &node->id, &node->score);
		end->next = node;
		end = node;
	}
	end->next = NULL;
	return head;
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	
	Student *s1 = create(n);
	Student *s2 = create(m); 
	
	Student *q = s2->next;
	while (q != NULL) {
		Student *p = s1->next, *t = s1;
		while (p != NULL) {  // 遍历链表的，不要用for循环了，while最稳妥且方便 
			if (q->id == p->id) {
				t->next = p->next;
				free(p);
			}
			else {
				t = p;
			}
			p = t->next;
		}
		q = q->next;
	}
	
	int total = 0;
	Student *t = s1->next;
	while (t != NULL) {
		total++;
		t = t->next;
	}
	printf("%d\n", total);
	t = s1->next;
	while (t != NULL) {
		printf("%d %d\n", t->id, t->score);
		t = t->next;
	}
	
	return 0;
} 
