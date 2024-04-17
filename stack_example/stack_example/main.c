#include <stdio.h>
#include <stdlib.h>
#include "stack_push.h"
#include "stack_pop.h"

int main() {

	int x;
	stack n;

	push(&n, 4);
	push(&n, 6);
	push(&n, 3);
	push(&n, 1);
	x = pop(&n);
	printf("%d\n", x);x = pop(&n);
	printf("%d\n", x);x = pop(&n);
	printf("%d\n", x);x = pop(&n);
	printf("%d\n", x);
	return 0;

}

