#include<stdio.h>
#include<stdlib.h>

struct ins {
	int n;
	struct ins *next;
}*fst, * pre, *cur, *new;

int main() {
	int num;
	while (1) {
		fst = NULL;
		printf("Enter integers>> ");
		scanf_s("%d", &num);
		if (num < 0) break;
		new = malloc(sizeof(struct ins));
		new ->n =num;
		new -> next = NULL;
		fst = new;
		printf("%d(%p)\n", fst->n, fst);
		while (1) {
			scanf_s("%d", &num);
			if (num < 0) break;
			else {
				new = malloc(sizeof(struct ins));
				new->n = num;
				new->next = NULL;
				cur = fst; 
				pre = NULL;
				while (cur != NULL && cur->n < num) {
					pre = cur;
					cur = cur->next;
				}
				if (pre == NULL) { 
					new->next = fst;
					fst = new;
				}
				else { 
					pre->next = new;
					new->next = cur;
				}
				cur = fst;
				while (1) {
					if (cur == NULL) break;
					printf("%d(%p) ", cur->n, cur);
					cur = cur->next;
				}
				printf("\n");
			}
		}

	}
	return 0;
} 
