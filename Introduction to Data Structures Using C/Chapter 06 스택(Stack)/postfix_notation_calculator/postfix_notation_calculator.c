#include <ctype.h>
#include <string.h>
#include "list_based_stack.h"

int EvaluatePostfixNotation(char postfix_notation[]) {
	Stack stack;
	int len = strlen(postfix_notation);
	int operand1, operand2;
	char token;

	Initialize(&stack);

	for (int i = 0; i < len; ++i) {
		token = postfix_notation[i];

		if (isdigit(token))
			Push(&stack, token - '0');
		else {
			operand2 = Pop(&stack);
			operand1 = Pop(&stack);

			switch (token) {
			case '*':
				Push(&stack, operand1 * operand2);
				break;
			case '+':
				Push(&stack, operand1 + operand2);
				break;
			case '-':
				Push(&stack, operand1 - operand2);
				break;
			case '/':
				Push(&stack, operand1 / operand2);
				break;
			}
		}
	}

	return Pop(&stack);
}