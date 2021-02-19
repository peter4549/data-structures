#pragma once
#ifndef __LIST_BASED_STACK_H__
#define __LIST_BASED_STACK_H__

#define FALSE 0
#define TRUE 1

typedef int Data;

typedef struct Node {
	Data data;
	struct Node *next;
} Node;

typedef struct ListBasedStack {
	Node *head;
} Stack;

void Initialize(Stack* stack);
int IsEmpty(Stack* stack);

void Push(Stack* stack, Data data);
Data Pop(Stack* stack);
Data Peek(Stack* stack);

#endif 