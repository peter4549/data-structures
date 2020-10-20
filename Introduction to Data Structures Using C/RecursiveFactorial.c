#include <stdio.h>

int factorial(int n) {
	if (n)
		return n * factorial(n - 1);
	else
		return 1;
}

int main() {
	printf("0! = %d \n", factorial(0));
	printf("1! = %d \n", factorial(1));
	printf("2! = %d \n", factorial(2));
	printf("3! = %d \n", factorial(3));
	printf("4! = %d \n", factorial(4));
	printf("5! = %d \n", factorial(5));
	printf("6! = %d \n", factorial(6));
	printf("7! = %d \n", factorial(7));

	return 0;
}
