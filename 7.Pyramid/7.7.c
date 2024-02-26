/**
	7.7.
		0
		1 0
		0 1 0
		1 0 1 0
		0 1 0 1 0
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
			if ((r + c) % 2 == 0) {
				printf("0 ");
			} else {
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	return 0;
}