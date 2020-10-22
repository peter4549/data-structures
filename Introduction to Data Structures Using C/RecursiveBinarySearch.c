#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 8
#define RANGE 8

void generateRandomIntegers(int integers[], int length, int range) {
	srand((int)time(NULL));

	for (int i = 0; i < length; ++i)
		integers[i] = rand() % range;
}

int recursiveBinarySearch(int integers[], int first, int last, int target) {
	int middle;

	if (first > last)
		return -1;

	middle = (first + last) / 2;

	if (integers[middle] == target)
		return middle;
	else if (integers[middle] > target)
		recursiveBinarySearch(integers, first, middle - 1, target);
	else
		recursiveBinarySearch(integers, middle + 1, last, target);
}

int static compare(const void* first, const void* second)
{
	if (*(int*)first > * (int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
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

	index = recursiveBinarySearch(integers, 0, sizeof(integers) / sizeof(int) - 1, 3);

	printf("Target: %d \n", 3);

	if (index == -1)
		printf("Search failure. \n");
	else
		printf("Target index: %d \n", index);

	index = recursiveBinarySearch(integers, 0, sizeof(integers) / sizeof(int) - 1, 7);

	printf("Target: %d \n", 7);

	if (index == -1)
		printf("Search failure. \n");
	else
		printf("Target index: %d \n", index);

	return 0;
}
