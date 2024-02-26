/*
	Write a program that read any octal number and display equivalent decimal number
*/

#include <stdio.h>

int main()
{
	int num;

	printf("Enter any octal number\n");

	scanf("%o", &num);

	printf("Equivalent decimal number is: %d\n", num);

	return 0;
}

/*
	for specifier of decimal number is %d
	
	for specifier of octal number is %o
*/