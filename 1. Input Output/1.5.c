/*
	Write a program that read and display an long number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	long num;

	scanf("%ld", &num);

	printf("%ld\n", num);

	return 0;
}

/*
	here %ld is the format specifier of long number
*/