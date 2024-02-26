/*
	Write a program that read and display an long number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	long num;

	printf("Enter any long number\n");

	scanf("%ld", &num);

	printf("The long number is: %ld\n", num);

	return 0;
}

/*
	here %ld is the format specifier of long number
*/