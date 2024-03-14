// linked_list_4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};
//BURAYA KADAR NODE YAPISI OLUŞTURDUK İÇERİSİNDE DATA ADLI İNT DEĞER
//NEXT ADLI POINTER DEGERI ICERIYOR
main() {
	struct node* head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 1;
	head->next = NULL;
	//BASLANGIC DUGUMU BELIRLEDIK ADI HEAD
		//BU HEAD NODE YAPISINDA VE KENDISININ BOYUTU KADAR BELLEKTE YER AYIRDIK
		//HEADIN DATASI 1 NEXTI YOK YANI NULL
		//EKLEMEK ISTERSEK : 
	head->next = (struct node*)malloc(sizeof(struct node));
	head->next->data = 3;
	head->next->next = NULL;
}
//type def ile struct yapısını tanımlarsak:
// bu sayede struct node yerine sadece node kullanabiliriz
typedef struct {
	int data;
	struct node* next;
} node;

main() {
	node* head = (node*)malloc(sizeof(node));
	head->data = 1;
	head->next = NULL;
	//başlangıç düğümü
	head->next = (node*)malloc(sizeof(node));
	head->next->data = 3;
	head->next->next = NULL;
	//düğüme eleman ekledim(sondan)
	return 0;

}