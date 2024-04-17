#ifndef __STACK_STRUCT_H
#define __STACK_STRUCT_H
#define STACK_SIZE 4

typedef struct {
	int data[STACK_SIZE];
	int top;
}stack;

#endif // !__STACK
