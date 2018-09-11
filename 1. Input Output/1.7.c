/*
	write a program that read and display double number
*/

#include <stdio.h>  // for scanf() and printf() function

int main()
{
	double number;

	printf("Enter any float number\n");

	scanf("%lf", &number);

	printf("%lf\n", number); // default

	printf("%.2lf\n", number); 

	printf("%.4lf\n", number); 
	
	printf("%.8lf\n", number); 

	return 0;
}

/*
	here %lf is the format specifier of double number

	by default printf() print the double number with 6 precision floating point.

	but we can print our desired precision using %.<int number>lf format 

	Example:

			%.1lf - 1 precision
			%.2lf - 2 precision
			%.3lf - 3 precision
			%.4lf - 4 precision
			%.5lf - 5 precision

			and so on
*/