/**
	6.6. Write a program to calculate the series: 1.2 + 2.3 + 3.4 + ... + n(n+1)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int nthNumber;
	int sum = 0;

	printf("Enter the nthNumber\n");
	scanf("%d", &nthNumber);

	for (int i = 1; i <= nthNumber; i++) {
		sum += i * (i + 1);
	}

	printf("The series sum is - %d\n", sum);

	return 0;
}