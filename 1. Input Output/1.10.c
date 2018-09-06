/*
	Write a program that read any character and display the ASCII value
*/

#include <stdio.h>

int main()
{
	char ch;

	scanf("%c", &ch);

	printf("%d\n", ch);

	return 0;
}

/*
	here, we read an character "scanf("%c", &ch);"

	then, show the equivalent ASCII value "printf("%d\n", ch);"

	because, we are %d not %c
*/