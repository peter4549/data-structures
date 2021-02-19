#define _CRT_SECURE_NO_WARNINGS

#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "list_based_stack.h"

int GetOperatorPrecedence(char operator) {
	switch (operator) {
	case '*':
	case '/':
		return 2;
	case '+':
	case '-':
		return 1;
	case '(':
		return 0;
	}

	return -1;
}

int CompareOperatorPrecedence(char operator1, char operator2) {
	int operator_1_precedence = GetOperatorPrecedence(operator1);
	int operator_2_precedence = GetOperatorPrecedence(operator2);

	if (operator_1_precedence > operator_2_precedence)
		return 1;
	else if (operator_1_precedence < operator_2_precedence)
		return -1;

	return 0;
}

void ConvertToPostfixNotation(char infix_notation[]) {
	Stack stack;
	int len = strlen(infix_notation);
	char* postfix_notation = (char*)malloc(len + 1);

	int index = 0;
	char token, top;

	Initialize(&stack);
	memset(postfix_notation, 0, sizeof(char) * len + 1);

	for (int i = 0; i < len; ++i) {
		token = infix_notation[i];

		if (isdigit(token))
			postfix_notation[index++] = token;
		else {
			switch (token) {
			case '(':
				Push(&stack, token);
				break;
			case ')':
				while (1) {
					top = Pop(&stack);

					if (top == '(')
						break;

					postfix_notation[index++] = top;
				}
				break;
			case '*':
			case '+':
			case '-':
			case '/':
				while (!IsEmpty(&stack) &&
					CompareOperatorPrecedence(Peek(&stack), token) >= 0)
					postfix_notation[index++] = Pop(&stack);

				Push(&stack, token);
				break;
			}
		}
	}

	while (!IsEmpty(&stack))
		postfix_notation[index++] = Pop(&stack);

	strcpy(infix_notation, postfix_notation);
	free(postfix_notation);
}