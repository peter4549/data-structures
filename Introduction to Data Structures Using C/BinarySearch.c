#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 8
#define RANGE 8

void generateRandomIntegers(int integers[], int length, int range) {
	srand((int) time(NULL));

	for (int i = 0; i < length; ++i)
		integers[i] = rand() % range;
}

int binarySearch(int integers[], int length, int target) {
	int first = 0;
	int last = length - 1;
	int middle;

	while (first <= last) {
		middle = (first + last) / 2;

		if (target == integers[middle])
			return middle;

		if (target < integers[middle])
			last = middle - 1;
		else
			first = middle + 1;
	}

	return -1;
}

int static compare(const void* first, const void* second)
{
	if (*(int*) first > *(int*) second)
		return 1;
	else if (*(int*) first < *(int*) second)
		return -1;
	else
		return 0;
}

int main(void) {
	int integers[ARRAY_SIZE] = { 0, };

	generateRandomIntegers(integers, ARRAY_SIZE, RANGE);
	qsort(integers, ARRAY_SIZE, sizeof(int), compare);
	
	printf("Integers: ");
	for (int i = 0; i < ARRAY_SIZE; ++i)
		printf("%d ", integers[i]);

	puts("");

	int index;

	index = binarySearch(integers, sizeof(integers) / sizeof(int), 3);

	printf("Target: %d \n", 3);
	
	if (index == -1)
		printf("Search failure. \n");
	else
		printf("Target index: %d \n", index);

	index = binarySearch(integers, sizeof(integers) / sizeof(int), 7);

	printf("Target: %d \n", 7);

	if (index == -1)
		printf("Search failure. \n");
	else
		printf("Target index: %d \n", index);

	return 0;
}
