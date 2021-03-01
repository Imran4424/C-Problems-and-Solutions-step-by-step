/**
	Write a program that read any number and display it's square root
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double number;
	
	printf("enter the number\n");
	scanf("%lf", &number);

	printf("square root of %lf is %lf\n", number, sqrt(number));

	return 0;
}