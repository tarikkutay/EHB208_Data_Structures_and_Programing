#include <stdlib.h>
#include <stdio.h>
#include "node_struct.h"
#include "add_last.h"

void add_last(node* temp, int key) {

	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = (node*)malloc(sizeof(node));
		temp->next->data = key;
		temp->next->next = NULL;
	}
	else
	{
		node* new_node = (node*)malloc(sizeof(node));
		new_node->data = key;
		new_node->next = NULL;
	}
}