/*
	write a program that read and display double number
*/

#include <stdio.h>  // for scanf() and printf() function

int main()
{
	double number;

	scanf("%d", &number);

	printf("%lf\n", number); // default

	printf("%.2lf\n", number); 

	printf("%.4lf\n", number); 
	
	printf("%.8lf\n", number); 

	return 0;
}