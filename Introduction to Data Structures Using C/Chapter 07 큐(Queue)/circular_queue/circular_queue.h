#pragma once
#ifndef __CIRCULAR_QUEUE_H__
#define __CIRCULAR_QUEUE_H__

#define FALSE 0
#define TRUE 1

#define LENGTH 1 << 5

typedef int Data;

typedef struct CircularQueue {
	Data array[LENGTH];
	int front;
	int rear;
} Queue;

void Initialize(Queue* queue);
int IsEmpty(Queue* queue);

void Enqueue(Queue* queue, Data data);
Data Dequeue(Queue* queue);
Data Peek(Queue* queue);

#endif