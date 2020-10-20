#include <stdio.h>

int fibonacci(int n) {
	if (n <= 2)
		return n - 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	for (int i = 1; i < 16; ++i)
		printf("%d ", fibonacci(i));

	return 0;
}
