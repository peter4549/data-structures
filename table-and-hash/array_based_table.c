#include <stdio.h>

typedef struct _employee {
	int employeeNumber;
	int age;
} Employee;

int main(void) {
	Employee employees[1 << 10];
	Employee employee;
	int employeeNumber;

	printf("Employee number and age: ");
	scanf_s("%d %d", &(employee.employeeNumber), &(employee.age));
	employees[employee.employeeNumber] = employee;

	printf("Employee number: ");
	scanf_s("%d", &employeeNumber);

	employee = employees[employeeNumber];
	printf("Employee number: %d, Age: %d \n", employee.employeeNumber, employee.age);

	return 0;
}
