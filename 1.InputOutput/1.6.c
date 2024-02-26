/*
	Write a program that read and display an long integer number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	long int num;

	printf("Enter a long int number\n");

	scanf("%ld", &num);

	printf("The long int number is: %ld\n", num);

	return 0;
}

/*
	here %ld is the format specifier of long int number

	actually it works for both long and long int

	because, long is nothing but bigger version of int number

	so we can write either long or long int

	I like to write long int 

	Happy Coding :)
*/