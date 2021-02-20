#include <stdio.h>
#include "infix_expression_to_postfix_expression.h"


int main() {
	char infix_expression_0[] = "1+2*3";
	char infix_expression_1[] = "(1+2)*3";
	char infix_expression_2[] = "((1-2)+3)*(5-2)";
	
	ConvertToPostfixExpression(infix_expression_0);
	ConvertToPostfixExpression(infix_expression_1);
	ConvertToPostfixExpression(infix_expression_2);

	printf("%s \n", infix_expression_0);
	printf("%s \n", infix_expression_1);
	printf("%s \n", infix_expression_2);
	
	return 0;
}