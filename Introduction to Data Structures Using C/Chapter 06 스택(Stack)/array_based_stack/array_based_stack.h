#pragma once
#ifndef __ARRAY_BASED_STACK_H__
#define __ARRAY_BASED_STACK_H__

#define FALSE 0
#define TRUE 1

#define LENGTH 1 << 5

typedef int Data;

typedef struct ArrayBasedStack {
	Data array[LENGTH];
	int top;
} Stack;

void Initialize(Stack* stack);
int IsEmpty(Stack* stack);

void Push(Stack* stack, Data data);
Data Pop(Stack* stack);
Data Peek(Stack* stack);

#endif