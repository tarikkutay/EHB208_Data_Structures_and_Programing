#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 4

typedef struct node {
	int data;
	struct node* next;
}node;	//baðlý liste düðümü tanýmladým

typedef struct {
	struct node *top;
	int cnt;
}stack;
//top nodu ve counter yapýsý tanýmladýk
typedef enum{false,true}boolean;
//c nin içinde standart true false 0 1 yok o yüzden numaralandýrdýk
void initStack(stack* stk) {
	stk->top = NULL;
	stk->cnt = 0;
}
boolean isEmpty(stack* stk) {
	return(stk->cnt == 0);
}

boolean isFull(stack *stk) {
	return(stk->cnt != STACK_SIZE);
}

void push(stack* stk, int c) {

	if (!isFull(stk)) {
		node *temp = (node*)malloc(sizeof(node));
		//yeni bir düðüm oluþturuldu
		temp->data = c;
		//o düðümün içinde istediðim deðerin datasý saklandý
		temp->next = stk->top;
		//o düðümün next deðeri stackin top deðerini gösterdi
		stk->top = temp;
		//o düðümü gösteren pointer top ile deðiþtirildi 
		stk->cnt++;
		//counter 1 arttýrýldý
	}
	//stack dolu deðilse bu iþlemler gerçekleþir
	else
		printf("\nStack Dolu\n");
}

int pop(stack* stk) {
	if (!isEmpty(stk)) {
		node *temp = stk->top;
		stk->top = stk->top->next;
		int x = temp->data;
		free(temp);
		stk->cnt--;
		return x;
	}
	else {
		printf("\nStack Bos\n\n");
		return INT_MIN;
	}
}

int main() {
	stack s;
	initStack(&s);

	push(&s, 10);
	push(&s, 20);
	push(&s, 30);

	int x = pop(&s);
	printf("%d stacktan çýkarýlan deðerdir", x);
	return 0;
}