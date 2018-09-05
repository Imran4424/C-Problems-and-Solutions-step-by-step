/*
	Write a program that read and display an long integer number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	long int num;

	scanf("%ld", &num);

	printf("%ld\n", num);

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