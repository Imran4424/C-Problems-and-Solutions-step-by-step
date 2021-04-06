/**
	8.5. Write a program that read a positive integer and display sum of its digit
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number, digitSum = 0;

	printf("Enter the number - ");
	scanf("%d", &number);
	printf("\n");

	while (0 != number) {
		int digit = number % 10; 

		digitSum = digitSum + digit;

		// int newNumber = number / 10; 
		// number = newNumber; 

		number = number / 10; 
	}

	printf("Digit Sum is - %d\n", digitSum);

	return 0;
}