#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

void Initialize(Deque* deque) {
	deque->head = NULL;
	deque->tail = NULL;
}

int IsEmpty(Deque* deque) {
	if (deque->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void AddFirst(Deque* deque, Data data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
    node->next = deque->head;

	if (IsEmpty(deque))
		deque->tail = node;
	else
		deque->head->previous = node;

	node->previous = NULL;
	deque->head = node;
}

void AddLast(Deque* deque, Data data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->previous = deque->tail;

	if (IsEmpty(deque))
		deque->head = node;
	else
		deque->tail->next = node;

	node->next = NULL;
	deque->tail = node;
}

Data RemoveFirst(Deque* deque) {
	Node* node = deque->head;

	if (IsEmpty(deque)) {
		printf("deque empty before pop \n");
		exit(-1);
	}

	Data data = deque->head->data;

	deque->head = deque->head->next;
	free(node);

	if (deque->head == NULL)
		deque->tail = NULL;
	else
		deque->head->previous = NULL;

	return data;
}

Data RemoveLast(Deque* deque) {
	Node* node = deque->tail;

	if (IsEmpty(deque)) {
		printf("deque empty before pop \n");
		exit(-1);
	}

	Data data = deque->tail->data;

	deque->tail = deque->tail->previous;
	free(node);

	if (deque->tail == NULL)
		deque->head = NULL;
	else
		deque->tail->next = NULL;

	return data;
}

Data GetFirst(Deque* deque) {
	if (IsEmpty(deque)) {
		printf("deque iterator not dereferencable \n");
		exit(-1);
	}

	return deque->head->data;
}

Data GetLast(Deque* deque) {
	if (IsEmpty(deque)) {
		printf("deque iterator not dereferencable \n");
		exit(-1);
	}

	return deque->tail->data;
}