#include <stdio.h>

void moveHanoiTower(int n, char from, char by, char to) {
	if (n == 1)
		printf("Move disk 1 from %c to %c. \n", from, to);
	else {
		moveHanoiTower(n - 1, from, to, by);
		printf("Move disk %d from %c to %c. \n", n, from, to);
		moveHanoiTower(n - 1, by, from, to);
	}
}

int main() {
	int n;

	printf("Enter the number of disks in the Tower of Hanoi. ");
	scanf_s("%d", &n, sizeof(int));
	moveHanoiTower(n, 'A', 'B', 'C');

	return 0;
}
