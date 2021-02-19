#include <stdio.h>
#include "array_based_stack.h"

void Initialize(Stack* stack) {
	stack->top = -1;
}

int IsEmpty(Stack* stack) {
	if (stack->top == -1)
		return TRUE;
	else
		return FALSE;
}

void Push(Stack* stack, Data data) {
	stack->top += 1;
	stack->array[stack->top] = data;
}

Data Pop(Stack* stack) {
	if (IsEmpty(stack)) {
		printf("deque empty before pop \n");
		exit(-1);
	}

	int top = stack->top;
	stack->top -= 1;

	return stack->array[top];
}

Data Peek(Stack* stack) {
	if (IsEmpty(stack)) {
		printf("deque empty before pop \n");
		exit(-1);
	}

	return stack->array[stack->top];
}