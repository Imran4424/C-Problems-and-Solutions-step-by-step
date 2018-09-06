/*
	Write a program that read ASCII value and display equivalent character
*/

#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);


	printf("%c\n", num);

	return 0;
}

/*
	here, we read an int number that is present in ASCII table

	but in printf() we are printing a character "%c" equivalent to that int number 
*/