#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	int id;
	int score;
	struct student *next;
}Student;

Student *create(int n) {
	Student *head = (Student*)malloc(sizeof(Student));
	head->next = NULL;
	Student *end = head;
	for (int i = 0; i < n; i++) {
		Student *node = (Student*)malloc(sizeof(Student));
		scanf("%d%d", &node->id, &node->score);
		// 尾插法
		end->next = node;
		end = node;
	}
	end->next = NULL; // 这里不要忘记！ 
	
	return head;
}

void merge(Student *s1, Student *s2) {
	Student *tail = s1;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = s2->next;
	free(s2); // 合并之后 s2可以释放了 
}

void swap(Student *s1, Student *s2) {
	int temp1 = s1->id;
	int temp2 = s1->score;
	s1->id = s2->id;
	s1->score = s2->score;
	s2->id = temp1;
	s2->score = temp2;
}

void sort(Student *s) {
	Student *p = s->next;
	while (p != NULL) {
		Student *min = p;
		Student *k = p->next;
		while (k != NULL) {
			if (k->id < min->id)
				min = k;
			k = k->next;
		}
		swap(min, p);
		p = p->next;
	}
}

void print(Student *s) {
	Student *p = s->next;
	Student *del;
	while (p != NULL) {
		printf("%d %d\n", p->id, p->score);
		del = p;
		p = p->next;
		free(del); // 必须放在最后！！！ 
	}
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	
	Student *s1 = create(n);
	Student *s2 = create(m);
	
	merge(s1, s2);
	sort(s1);
	print(s1);
	
	return 0;
}
