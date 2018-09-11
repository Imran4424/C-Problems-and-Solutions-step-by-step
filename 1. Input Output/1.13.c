/*
	Write a program that read any decimal number and display equivalent octal number
*/

#include <stdio.h>

int main()
{
	int num;

	printf("Enter a decimal number\n");

	scanf("%d", &num);

	printf("Equivalent octal number is: %o\n", num);

	return 0;
}

/*
	here, format specifier for int or decimal is %d
		 format specifier for octal number is %o
*/