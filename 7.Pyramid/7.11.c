/**
	7.11.
		1 2 3 4 5
		1 2 3 4
		1 2 3
		1 2
		1
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - ");
	scanf("%d", &n);

	printf("\n\n");

	for (int r = n; r >= 1; r--) {
		for (int c = 1; c <= r; c++) {
			printf("%d ", c);
		}
		printf("\n");
	}
	
	return 0;
}