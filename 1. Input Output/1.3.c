/*
	Write a program that read and display an integer number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	int num;

	printf("Enter any int number\n");

	scanf("%d", &num);

	printf("The int number is: %d\n", num);

	return 0;
}

/*
	scanf - input stream for c
	printf - output stream for c

	stdio.h - holds both scanf and printf

	here %d is the format specifier of int number
*/