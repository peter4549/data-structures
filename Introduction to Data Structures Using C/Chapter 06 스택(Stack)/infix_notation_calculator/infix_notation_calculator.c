#include <stdlib.h>
#include <string.h>
#include "infix_notation_to_postfix_notation.h"
#include "postfix_notation_calculator.h"

int EvaluateInfixNotation(char infix_notation[]) {
	int len = strlen(infix_notation);
	int ret;
	char* postfix_notation = (char*)malloc(len + 1);
	strcpy(postfix_notation, infix_notation);

	ConvertToPostfixNotation(postfix_notation);
	ret = EvaluatePostfixNotation(postfix_notation);

	free(postfix_notation);
	return ret;
}