#include <stdlib.h>
#include "list_based_queue.h"

void Initialize(Queue* queue) {
	queue->front = NULL;
	queue->rear = NULL;
}

int IsEmpty(Queue* queue) {
	if (queue->front == NULL)
		return TRUE;
	else
		return FALSE;
}

void Enqueue(Queue* queue, Data data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->next = NULL;
	node->data = data;

	if (IsEmpty(queue)) {
		queue->front = node;
		queue->rear = node;
	}
	else {
		queue->rear->next = node;
		queue->rear = node;
	}
}

Data Dequeue(Queue* queue) {
	Node* node;
	Data ret;

	if (IsEmpty(queue)) {
		printf("deque iterator not dereferencable \n");
		exit(-1);
	}

	node = queue->front;
	ret = node->data;
	queue->front = queue->front->next;

	free(node);
	return ret;
}

Data Peek(Queue* queue) {
	if (IsEmpty(queue)) {
		printf("deque iterator not dereferencable \n");
		exit(-1);
	}

	return queue->front->data;
}