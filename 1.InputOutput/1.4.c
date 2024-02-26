/*
	Write a program that read and display floating point number
*/

#include <stdio.h> // for scanf() and printf() function

int main()
{
	float num;

	printf("Enter any float number\n");

	scanf("%f", &num);

	printf("%f\n", num); //default

	printf("%.1f\n", num); 

	printf("%.2f\n", num);

	printf("%.3f\n", num); 
	
	printf("%.4f\n", num); 

	return 0;
}

/*
	here %f is the format specifier of float number

	by default printf() print the float number with 6 precision floating point 

	but we can print our desired precision using %.<int number>f format 

	Example:

			%.1f - 1 precision
			%.2f - 2 precision
			%.3f - 3 precision
			%.4f - 4 precision
			%.5f - 5 precision

			and so on
*/