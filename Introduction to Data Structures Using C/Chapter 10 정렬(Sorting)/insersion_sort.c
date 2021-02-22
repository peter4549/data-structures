#include <stdio.h>

void InsertionSort(int array[], int n) {
	int j, m;

	for (int i = 1; i < n; ++i) {
		m = array[i];

		for (j = i - 1; j >= 0; --j) {
			if (array[j] > m)
				array[j + 1] = array[j];
			else
				break;
		}

		array[j + 1] = m;
	}
}

int main() {
	int array[5] = { 5, 3, 2, 4, 1 };

	InsertionSort(array, sizeof(array) / sizeof(int));

	for (int i = 0; i < 5; ++i)
		printf("%d ", array[i]);

	return 0;
}
