/*
	Write a program that read any decimal number and display equivalent hexadecimal number
*/
#include <stdio.h>

int main()
{
	int num;

	printf("Enter a decimal number\n");

	scanf("%d", &num);

	printf("Equivalent hexadecimal small: %x\n", num);
	printf("Equivalent hexadecimal capital: %X\n", num);

	return 0;
}

/*
	for specifier of decimal number is %d
	
	for specifier of hexadecimal number is %x for small letters
	for specifier of hexadecimal number is %X for capital letters
*/