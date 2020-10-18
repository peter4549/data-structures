#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE 8
#define RANGE 8

void generateRandomIntegers(int integers[], int length, int range) {
	srand((int) time(NULL));

	for (int i = 0; i < length; ++i)
		integers[i] = rand() % range;
}

int linearSearch(int integers[], int length, int target) {
	for (int i = 0; i < length; ++i) {
		if (integers[i] == target)
			return i;
	}

	return -1;
}

int main(void) {
	int integers[ARRAY_SIZE] = { 0, };

	generateRandomIntegers(integers, ARRAY_SIZE, RANGE);
	
	printf("Integers: ");
	for (int i = 0; i < ARRAY_SIZE; ++i)
		printf("%d ", integers[i]);

	puts("");

	int index;
	index = linearSearch(integers, sizeof(integers) / sizeof(int), 3);

	if (index == -1)
		printf("Search failure. \n");
	else
		printf("Target index: %d \n", index);

	index = linearSearch(integers, sizeof(integers) / sizeof(int), 7);

	if (index == -1)
		printf("Search failure. \n");
	else
		printf("Target index: %d \n", index);

	return 0;
}
