/**
	7.6.
		1
		2 3
		3 4 5
		4 5 6 7
		5 6 7 8 9
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
			printf("%d ", r + c - 1);
		}
		printf("\n");
	}

	return 0;
}
