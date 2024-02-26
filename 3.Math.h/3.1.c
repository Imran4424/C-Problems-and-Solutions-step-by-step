/**
	Write a program that read any integer number and display absolute value
*/


#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	
	printf("Enter an integer value\n");
	scanf("%d", &number);

	printf("absolute value is %d\n", abs(number));

	return 0;
}