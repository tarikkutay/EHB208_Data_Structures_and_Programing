#include <stdlib.h>
#include <stdio.h>
#include "destroy_list.h"

void destroy_list(node *head) {
	if (head == NULL) {
		printf("liste zaten bos\n");
		return;
	}
	node* temp2;
	while (head != NULL) {
		temp2 = head;
		head = head->next;
		free(temp2);
	}
}