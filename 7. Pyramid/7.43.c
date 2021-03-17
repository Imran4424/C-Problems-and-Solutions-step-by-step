/**
	7.43. Write a complete C program that asks the user for a number n and then prints a large grid
	of small squares. Each small square has size (n − 1) × (n − 1) and contains ∗ symbols. The large 
	grid should have n rows each of which contains n small squares, with a blank column separating 
	these squares. The rows of small squares in the large grid should be separated by blank rows.
	
	For example, if the user specified 3 for n, the program would print as follows:

		** ** **
		** ** **

		** ** **
		** ** **

		** ** **
		** ** **
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - ");
	scanf("%d", &n);

	printf("\n\n");

	for (int r = 1; r <= n; r++) {
		for (int i = 1; i < n; i++) {
			for (int j = 1; j <= n * (n - 1); j++) {
				printf("*");
				if(j % (n - 1) == 0) {
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}