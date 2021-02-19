#include <stdio.h>
#include "infix_notation_to_postfix_notation.h"


int main() {
	char infix_notation_0[] = "1+2*3";
	char infix_notation_1[] = "(1+2)*3";
	char infix_notation_2[] = "((1-2)+3)*(5-2)";
	
	ConvertToPostfixNotation(infix_notation_0);
	ConvertToPostfixNotation(infix_notation_1);
	ConvertToPostfixNotation(infix_notation_2);

	printf("%s \n", infix_notation_0);
	printf("%s \n", infix_notation_1);
	printf("%s \n", infix_notation_2);
	
	return 0;
}