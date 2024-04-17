#include "stack_pop.h"
#include <stdlib.h>
#include <stdio.h>

int pop(stack* stk) {
	if (stk->top == -1)
		printf("stack bos");
	else {
		int x = stk->top--;
	}
}