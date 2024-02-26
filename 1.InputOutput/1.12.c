/*
	Write a program that read any upper case character and display in lower case
*/

#include <stdio.h>

int main()
{
	char ch;

	printf("Enter any upper case character\n");

	scanf("%c", &ch);

	ch = ch + 32;

	printf("Equivalent lower case character is: %c\n", ch);

	return 0;
}

/*
	difference between uppercase and lower case in ASCII table is 32

	Here, Input: any upper case character, A-Z

		 Output: any lower case character, a-z
*/