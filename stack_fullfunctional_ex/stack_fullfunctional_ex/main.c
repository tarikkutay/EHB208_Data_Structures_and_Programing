#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 4

typedef struct {
	int top;
	int data[STACK_SIZE];
}stack;

void push(stack* stk, int c) {
	if (stk->top == STACK_SIZE - 1)
		printf("\nStack dolu\n\n");
	else {
		stk->top++;
		stk->data[stk->top] = c;
	}
}
void reset(stack* stk) {
	stk->top = -1;
}

int pop(stack* stk) {
	if (stk->top == -1) {
		printf("\nSTACK BOS\n\n");
	}
	else {
		int x = stk->data[stk->top];
		stk->top--;
		return x;
	}
	
}
int main() {
	int x;
	stack n;
	reset(&n);
	push(&n, 10);
	push(&n, 20);
	push(&n, 30);
	x = pop(&n);
	printf("%d popped from stack\n",x);

	return 0;
}