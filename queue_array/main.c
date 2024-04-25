#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define QUEUE_SIZE 10

typedef struct {
	int front;
	int rear;
	int cnt;
	int data[QUEUE_SIZE];
}queue;
//bu kuyruk yapýsýdýr

void initialize(queue* q) {
	q->front = 0;
	q->rear = -1;
	q->cnt = 0;
}
//baþlangýç deðerlerini belirledim

typedef enum { false, true }boolean;
//0 ve 1 e true false atadým

boolean isEmpty(queue* q) {
	return (q->cnt == 0);
}

boolean isFull(queue* q) {
	return(q->cnt == QUEUE_SIZE);
}

void enqueue(queue* q, int x) {
	if (!isFull) {
		q->rear++;
		q->cnt++;

		if (q->rear == QUEUE_SIZE) {
			q->rear = 0;
			//QUEUE_SIZE 4 olsun son arttýrmada rear 4 olursa onu 0 yap çünkü rear 0123 de hareket eder
			q->data[q->rear] = x;
			//q'daki datalardan rear datasýný x e eþitle
		}
	}
}

int dequeue(queue* q) {
	if (!isEmpty) {
		int x = q->data[q->front];
		q->front++;
		q->cnt--;

		if (q->front == QUEUE_SIZE)
			q->front = 0;
		return x;
	}
}

int main() {
	int x;

	queue c;
	initialize(&c);
	enqueue(&c, 20);
	enqueue(&c, 10);

	x = dequeue(&c);
	printf("%d queueye eklenen ilk deger", x);
	return 0;
}