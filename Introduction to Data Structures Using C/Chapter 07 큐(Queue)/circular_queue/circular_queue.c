#include <stdio.h>
#include <stdlib.h>
#include "circular_queue.h"

void Initialize(Queue* queue) {
	queue->front = 0;
	queue->rear = 0;
}

int IsEmpty(Queue* queue) {
	if (queue->front == queue->rear)
		return TRUE;
	else
		return FALSE;
}

int NextPosition(int position) {
	if (position == LENGTH - 1)
		return 0;
	else
		return position + 1;
}

void Enqueue(Queue* queue, Data data) {
	if (NextPosition(queue->rear) == queue->front) {
		printf("Stack around the variable \'array\' was corrupted. \n");
		exit(-1);
	}

	queue->rear = NextPosition(queue->rear);
	queue->array[queue->rear] = data;
}

Data Dequeue(Queue* queue) {
	if (IsEmpty(queue)) {
		printf("deque iterator not dereferencable \n");
		exit(-1);
	}

	queue->front = NextPosition(queue->front);
	return queue->array[queue->front];
}

Data Peek(Queue* queue) {
	if (IsEmpty(queue)) {
		printf("deque iterator not dereferencable \n");
		exit(-1);
	}

	return queue->array[NextPosition(queue->front)];
}