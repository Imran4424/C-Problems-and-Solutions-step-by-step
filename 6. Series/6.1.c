/**
	Write a program to calculate the series: 1 + 2 + 3 + 4 + ... + n (nth number)
*/
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int nthNumber, sum = 0;

	printf("Please enter the nth number\n");
	scanf("%d", &nthNumber);

	int a = 1;
	int d = 1;

	int i = a;

	while (i <= nthNumber) {
		sum = sum + i;
		i = i + d;
	}

	printf("series sum is - %d\n", sum);

	return 0;
}

/**
	First need to find some points,

	first number of the series, a - 1
	difference between two adjacent number is, d = 1

	nth number is, n - this will be inputed by the user(remember this is not value of n, this is nth number)
*/
