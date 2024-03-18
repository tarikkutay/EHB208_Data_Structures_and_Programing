#include <stdlib.h>
#include <stdio.h>
#include "destroy_list.h"
#include "recursive_print.h"

int main() {
	node* head = (node*)malloc(sizeof(node));
	head->data = 3;
	head->next = (node*)malloc(sizeof(node));
	head->next->data = 5;
	head->next->next = (node*)malloc(sizeof(node));
	head->next->next->data = 7;
	head->next->next->next = NULL;

	
	print_recursive(head);

	//destroy_list(head);// fonk çaðýrýrsam liste silinir ve hata alýrýz
}