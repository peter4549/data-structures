#include <stdio.h>

void SelectionSort(int array[], int n) {
	int min, t;

	for (int i = 0; i < n - 1; ++i) {
		min = i;

		for (int j = i + 1; j < n; ++j)
			if (array[j] < array[min])
				min = j;

		t = array[i];
		array[i] = array[min];
		array[min] = t;
	}
}

int main() {
	int array[4] = { 3, 4, 2, 1 };
	
	SelectionSort(array, sizeof(array) / sizeof(int));

	for (int i = 0; i < 4; ++i)
		printf("%d ", array[i]);

	return 0;
}
