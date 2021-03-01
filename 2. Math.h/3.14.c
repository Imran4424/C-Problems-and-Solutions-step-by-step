/**
	Write a program that read two numbers base, power and display the value of base^power
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double base, power;

	printf("Enter the base and power\n");
	scanf("%lf %lf", &base, &power);

	printf("base ^ power is %lf\n", pow(base, power));

	return 0;
}