#ifndef	__NODE_STRUCT_H
#define __NODE_STRUCT_H
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}node;

#endif