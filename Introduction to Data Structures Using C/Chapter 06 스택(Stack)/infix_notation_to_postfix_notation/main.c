#include <stdio.h>
#include "infix_notation_to_postfix_notation.h"

int main() {
	char infix_notation0[] = "1+2*3";
	char infix_notation1[] = "(1+2)*3";
	char infix_notation2[] = "((1-2)+3)*(5-2)";
	
	ConvertToPostfixNotation(infix_notation0);
	ConvertToPostfixNotation(infix_notation1);
	ConvertToPostfixNotation(infix_notation2);

	printf("%s \n", infix_notation0);
	printf("%s \n", infix_notation1);
	printf("%s \n", infix_notation2);
	
	return 0;
}
