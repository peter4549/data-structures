#include <stdio.h>
#include "list_based_stack.h"

void Initialize(Stack* stack) {
	stack->head = NULL;
}

int IsEmpty(Stack* stack) {
	if (stack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void Push(Stack* stack, Data data) {
	Node *node = (Node*)malloc(sizeof(Node));

	node->data = data;
	node->next = stack->head;

	stack->head = node;
}

Data Pop(Stack* stack) {
	if (IsEmpty(stack)) {
		printf("deque empty before pop \n");
		exit(-1);
	}

	Data data = stack->head->data;
	Node* node = stack->head;

	stack->head = stack->head->next;
	free(node);
	return data;
}

Data Peek(Stack* stack) {
	if (IsEmpty(stack)) {
		printf("deque empty before pop \n");
		exit(-1);
	}

	return stack->head->data;
}