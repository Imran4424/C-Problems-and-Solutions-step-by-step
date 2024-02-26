/**
	7.41. The following program asks the user to enter a number n. It then prints a picture showing a
	downward pointing triangle with n rows and 2n - 1 columns. 
	For example, if n = 4 it would print

		*******
		 *****
		  ***
		   *
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - ");
	scanf("%d", &n);

	printf("\n\n");

	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= 2 * n - r; c++) {
			if (c < r) {
				printf(" ");
			}

			if (c >= r) {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}