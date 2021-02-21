#include <stdio.h>

void BubbleSort(int array[], int n) {
	int t;

	for (int i = 0; i < n - 1; ++i)
		for (int j = 0; j < n - i - 1; ++j) {
			if (array[j] > array[j + 1]) {
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
}

int main() {
	int array[4] = { 3, 2, 4, 1 };
	
	BubbleSort(array, sizeof(array) / sizeof(int));

	for (int i = 0; i < 4; ++i)
		printf("%d ", array[i]);

	return 0;
}
