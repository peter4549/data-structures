#include <stdio.h>
#include "postfix_notation_calculator.h"

int main() {
	char postfix_notation0[] = "42*8+";
	char postfix_notation1[] = "123+*4/";

	printf("%s = %d \n", postfix_notation0, EvaluatePostfixNotation(postfix_notation0));
	printf("%s = %d \n", postfix_notation1, EvaluatePostfixNotation(postfix_notation1));
	
	return 0;
}