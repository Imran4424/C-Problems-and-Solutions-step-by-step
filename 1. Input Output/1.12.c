/*
	Write a program that read any upper case character and display in lower case
*/

#include <stdio.h>

int main()
{
	char ch;

	scanf("%c", &ch);

	ch = ch + 32;

	printf("%c\n", ch);

	return 0;
}

/*
	Here, Input: any upper case character, A-Z

		 Output: any lower case character, a-z
*/