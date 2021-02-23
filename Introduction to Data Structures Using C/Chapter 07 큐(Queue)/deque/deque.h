#pragma once
#ifndef __DEQUE_H__
#define __DEQUE_H__

#define FALSE 0
#define TRUE 1

typedef int Data;

typedef struct Node {
	Data data;
	struct Node* next;
	struct Node* previous;
} Node;

typedef struct Deque {
	Node* head;
	Node* tail;
} Deque;

void Initialize(Deque* deque);
int IsEmpty(Deque* deque);

void AddFirst(Deque* deque, Data data);
void AddLast(Deque* deque, Data data);

Data RemoveFirst(Deque* deque);
Data RemoveLast(Deque* deque);

Data GetFirst(Deque* deque);
Data GetLast(Deque* deque);

#endif