#include <stdio.h>
#include "list_based_stack.h"


int main() {
	Stack stack;
	Initialize(&stack);

	Push(&stack, 0);
	Push(&stack, 1);
	Push(&stack, 2);
	Push(&stack, 3);
	Push(&stack, 4);

	while (!IsEmpty(&stack))
		printf("%d ", Pop(&stack));

	return 0;
}