#include <stdlib.h>
#include "remove_node.h"

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
void remove_node(node* head, int key) {
	if (head == NULL) {
		printf("listede eleman yok\n");
		return;
	}
	node* temp = head;//þimdi bir geçici düðüm oluþturduk bunu gezdireceðiz
//ilk kýsýmdaki key ve data uyuþursa 
	if (head ->data == key)
	{
		head = head->next;
		free(temp);
		//ilk kýsýmdaysa eðer key tempe gerek kalmadan headi headin nextine eþitle ilk nodeu sil
	}
	else if (temp->next == NULL)
	{
		printf("silmek istediðin veri diye bir þey yok masmalesef\n");
		return;
		//NULL BULURSA HATA MESAJI ÇIKART
	}
	//ÞÝMDÝ ORTALARDA ARAMA YAPACAÐIZ
	else
	{
		while (temp->next->data != key)
		{
			if (temp->next -> next == NULL) {
				printf("silmek istediðin veri yok\n");
				return head;
				//yine tek düðüm var bu sefer head döndürülür
			}
			temp->next->next;
			//bir sonraki düðüme geç ta ki null olana dek
		}
		node* temp2 = temp->next;
		temp->next = temp->next->next;
		free(temp2);
		//elimizde 8 5 7 ve 4 lük liste varsa ben 7 yi arýyorsam tempimi 5'in nextine 
		//kadar gezdiririm ve 5->next = temp olur ardýndan bir temp 2 yaparým bu da 4
		//kaybolmamasý için bu temp2 = temp->next olur ardýndan 5in nextini 4 e baglarým;
		//temp->next = temp->next->next
		//free(temp2)yapar bitiririm
	}
}