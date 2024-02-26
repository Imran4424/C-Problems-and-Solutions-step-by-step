/**
	Write a C program to generate a simple arithmetic calculator

	hints:
	enter two numbers: 6 5
	select the menu:
	1. Add
	2. Subtract
	3. Multiply
	4. Divide
*/

#include <stdio.h>

int main()
{
	int numOne, numTwo;

	printf("Enter two numbers\n");
	scanf("%d %d", &numOne, &numTwo);

	int decision;
	printf("select the menu\n");
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
	printf("4. Divide\n");

	printf("decision: ");
	scanf("%d", &decision);

	if (decision == 1) {
		printf("Addition is - %d\n", numOne + numTwo);
	} else if (decision == 2) {
		printf("Subtract is - %d\n", numOne - numTwo);
	} else if (decision == 3) {
		printf("Multiplication - %d\n", numOne * numTwo);
	} else if (decision == 4) {
		if (0 == numTwo) {
			printf("Math Error\n");
		}

		printf("Result is - %d\n", numOne / numTwo);
	} else {
        	printf("Invalid Input\n");
    	}

	return 0;
}
