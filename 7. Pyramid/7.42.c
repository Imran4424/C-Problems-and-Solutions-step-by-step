/**
	7.42. Write a complete C program that asks the user for a number n of triangles to print. It then
	prints n triangles made of X symbols, one above another. Each triangle has n rows and every second 
	triangle is upside down. The triangles should be separated by lines of - symbols.

	For example, here is the output from the program where the user specifies 4 for n.

		X
		XX
		XXX
		XXXX
		----
		XXXX
		 XXX
		  XX
		   X
		----
		X
		XX
		XXX
		XXXX
		----
		XXXX
		 XXX
		  XX
		   X
		----
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - ");
	scanf("%d", &n);

	printf("\n\n");

	for (int i = 1; i <= n; i++) {
		for (int r = 1; r <= n; r++) {
			if (i % 2 == 0) {
				for (int s = 1; s < r; s++) {
					printf(" ");
				}
				for (int c = 1; c <= n - r + 1; c++) {
					printf("X");
				}
			} else {
				for (int c = 1; c <= r; c++) {
					printf("X");
				}
			}
			printf("\n");
		}

		for (int u = 1; u <= n; u++) {
			printf("-");
		}
		printf("\n");
	}
	return 0;
}