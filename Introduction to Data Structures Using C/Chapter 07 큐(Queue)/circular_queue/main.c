#include <stdio.h>
#include "circular_queue.h"

int main() {
	Queue queue;
	Initialize(&queue);

	Enqueue(&queue, 0);
	Enqueue(&queue, 1);
	Enqueue(&queue, 2);
	Enqueue(&queue, 3);
	Enqueue(&queue, 4);

	while (!IsEmpty(&queue)) 
		printf("%d ", Dequeue(&queue));
	
	return 0;
}