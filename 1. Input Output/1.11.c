/*
	Write a program that read any lower case character and display in upper case
*/

#include <stdio.h>

int main()
{
	char ch;

	scanf("%c", &ch);

	ch = ch - 32;

	printf("%c\n", ch);

	return 0;
}

/*
	Here, Input: any lower case character, a-z

		 Output: any upper case character, A-Z
*/