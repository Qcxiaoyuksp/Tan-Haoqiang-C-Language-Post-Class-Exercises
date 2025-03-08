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
	
	Node *p = head->next;  // 在前 （每次删除p指针指向的） 
	Node *q = head->next; // 在后 
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
