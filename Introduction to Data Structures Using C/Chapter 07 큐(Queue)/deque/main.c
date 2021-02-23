#include <stdio.h>
#include "deque.h"

int main() {
	Deque deque;
	Initialize(&deque);

	AddFirst(&deque, 3);
	AddFirst(&deque, 2);
	AddFirst(&deque, 1);

	AddLast(&deque, 4);
	AddLast(&deque, 5);
	AddLast(&deque, 6);

	while (!IsEmpty(&deque))
		printf("%d ", RemoveFirst(&deque));

	printf("\n");

	AddFirst(&deque, 3);
	AddFirst(&deque, 2);
	AddFirst(&deque, 1);

	AddLast(&deque, 4);
	AddLast(&deque, 5);
	AddLast(&deque, 6);

	while (!IsEmpty(&deque))
		printf("%d ", RemoveLast(&deque));

	return 0;
}