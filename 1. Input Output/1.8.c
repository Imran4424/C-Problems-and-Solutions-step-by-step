/*
	Write a program that read and display a character
*/

#include <stdio.h>

int main()
{
	char ch;

	printf("Enter any character\n");

	scanf("%c", &ch);

	printf("The character is: %c\n", ch);

	return 0;
}

/*
	Here %c is a format specifier of char data type

	to see all character list 
	go to the following link. the link will take you to ASCII table

	http://www.asciitable.com/

	ASCII table

	ASCII stands for American Standard Code for Information Interchange.

	ASCII table is a kind of table where all characters are listed 

	along with their equivalent decimal, hexadecimal and octal numbers.


	here, decimal is equivalent to our int data type in C
	so, for now we will be using the decimal, I mean the int numbers
*/