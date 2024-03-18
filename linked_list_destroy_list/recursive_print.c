#include "recursive_print.h"
#include <stdlib.h>

void print_recursive(node* head) {
	if (head == NULL)
		return;
	printf("%d\t", head->next);
	print_recursive(head->next);
}
