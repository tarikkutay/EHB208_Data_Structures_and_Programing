#ifndef __DESTROY_LIST_H
#define _DESTROY_LIST_H
typedef struct node {
	int data;
	struct node* next;
}node;
void destroy_list(head);
#endif // !__DESTRO_LIST_H
