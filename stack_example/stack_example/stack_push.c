#include "stack_push.h"
#include <stdlib.h>
#include <stdio.h>

void push(stack* stk, int c) {
	if (stk->top == STACK_SIZE - 1)
		printf("stack dolu\n");
	else {
		stk->top++;
		stk->data[stk->top] = c;
	}
}