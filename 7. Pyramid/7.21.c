/**
	7.21.

			1
		      1 2
		    1 2 3
		  1 2 3 4
		1 2 3 4 5
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - ");
	scanf("%d", &n);

	printf("\n\n");

	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= r; c++) {
			printf("%d ", c);
		}
		printf("\n");
	}

	return 0;
}