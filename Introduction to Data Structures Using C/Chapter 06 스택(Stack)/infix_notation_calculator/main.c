#include <stdio.h>
#include "infix_notation_calculator.h"

int main() {
	char infix_notation0[] = "1+2*3";
	char infix_notation1[] = "(1+2)*3";
	char infix_notation2[] = "((1+2)+3)*(5-2)";

	printf("%s = %d \n", infix_notation0, EvaluateInfixNotation(infix_notation0));
	printf("%s = %d \n", infix_notation1, EvaluateInfixNotation(infix_notation1));
	printf("%s = %d \n", infix_notation2, EvaluateInfixNotation(infix_notation2));
	
	return 0;
}