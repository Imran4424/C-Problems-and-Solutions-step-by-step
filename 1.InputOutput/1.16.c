/*
	Write a program that read any hexadecimal number and display equivalent decimal number
*/

#include <stdio.h>

int main()
{
	int num;

	printf("Enter the hexadecimal number\n");

	scanf("%x", &num);

	printf("The equivalent decimal number is: %d\n", num);

	return 0;
}

/*
	for specifier of decimal number is %d
	
	for specifier of hexadecimal number is %x
*/