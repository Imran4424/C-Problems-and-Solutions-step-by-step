/**
	6.9. Write a program to calculate the series: 1^2 + 2^2 + 3^2 + ... + n^2
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int nthNumber;
	int sum = 0;

	printf("Enter the value of nthNumber\n");
	scanf("%d", &nthNumber);

	int i = 1;

	while (i <= nthNumber) {
		sum = sum + pow(i, 2);

		i++;
	}

	printf("series sum is - %d\n", sum);

	return 0;
}