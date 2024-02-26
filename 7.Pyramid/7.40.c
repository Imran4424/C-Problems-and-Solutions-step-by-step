/**
	7.40. The following program asks the user to enter a number n. It then prints a picture showing a
	triangle that points to the right that has 2n - 1 rows and n columns.
	For example, if n = 4 the program would print

		*
		**
		***
		****
		***
		**
		*
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - ");
	scanf("%d", &n);

	printf("\n\n");

	for (int r = 1; r < 2 * n; r++) {
		for (int c = 1; c <= r; c++) {
			if (c > 2 * n - r) {
				break;
			}

			printf("*");
		}
		printf("\n");
	}

	return 0;
}
