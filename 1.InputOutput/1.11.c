/*
	Write a program that read any lower case character and display in upper case
*/

#include <stdio.h>

int main()
{
	char ch;

	printf("Enter any lower case character\n");

	scanf("%c", &ch);

	ch = ch - 32;

	printf("Equivalent upper case character is: %c\n", ch);

	return 0;
}

/*
	difference between uppercase and lower case in ASCII table is 32

	Here, Input: any lower case character, a-z

		 Output: any upper case character, A-Z
*/