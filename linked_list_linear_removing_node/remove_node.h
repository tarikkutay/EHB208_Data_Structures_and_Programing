#ifndef __REMOVE_NODE_H
#define __REMOVE_NODE_H
#include <stdlib.h>
typedef struct node {
	int data;
	struct node* next;
}node;
void remove_node(node* head, int key);
void listinfo(node* head);

#endif