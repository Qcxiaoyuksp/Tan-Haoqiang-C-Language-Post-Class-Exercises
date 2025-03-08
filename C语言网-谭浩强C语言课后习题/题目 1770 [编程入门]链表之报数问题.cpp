#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int num;
	struct node *next;
}Node;

Node *create(int n) {
	Node *head = (Node*)malloc(sizeof(Node));
	Node *end = head;
	for (int i = 0; i < n; i++) {
		Node *node = (Node*)malloc(sizeof(Node));
		node->num = i+1;
		end->next = node;
		end = node;
	}
	end->next = head->next;
	return head;
}

int main() {
	int n;
	scanf("%d", &n);
	Node *head = create(n);
	
	Node *p = head->next;  // ��ǰ ��ÿ��ɾ��pָ��ָ��ģ� 
	Node *q = head->next; // �ں� 
	int i = 1;
	while (n > 1) {
		if (i % 3 == 0) {
			q->next = p->next;
			n--;
			free(p);
		}
		else {
			q = p;
		}
		p = q->next;
		i++;
	}
	
	printf("%d", q->num); 
	
	return 0;
}
