#pragma once
#ifndef __LIST_BASED_QUEUE_H__
#define __LIST_BASED_QUEUE_H__

#define FALSE 0
#define TRUE 1

typedef int Data;

typedef struct Node{
	Data data;
	struct Node* next;
} Node;

typedef struct ListBasedQueue {
	Node* front;
	Node* rear;
} Queue;

void Initialize(Queue* queue);
int IsEmpty(Queue* queue);

void Enqueue(Queue* queue, Data data);
Data Dequeue(Queue* queue);
Data Peek(Queue* queue);

#endif