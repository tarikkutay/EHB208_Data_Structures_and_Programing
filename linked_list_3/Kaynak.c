#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	struct node* next;
}node;
//bir tane liste eleman yazdýrma fonk tanýmladýk

void listinfo(node* head) {
	int i = 1;
	while (head != NULL) {
		printf("%d. Dugumunun Adresi = %p \n", i, head);
		printf("%d. Dugumunun verisi = %d \n", i, head->data);
		printf("%d. Dugumunun Bagli Oldugu Dugumun Adresi= %p\n\n", i, head->next);
		head = head->next;
		i++;
	}
}
//linked_list_1 klasörü içindeki node yapýsý aynen yazýldý

int main() {
	node* head = (node*)malloc(sizeof(node));
	head->data = 1;
	head->next = NULL;
	//baþlangýç düðümü
	head->next = (node*)malloc(sizeof(node));
	head->next->data = 3;
	head->next->next = NULL;
	//düðüme eleman ekledim(sondan)
	listinfo(head);
	return 0;

}