/**
	7.44. Write a complete C++ program that asks the user for a number n and prints n squares made of
	∗ symbols each with an upward diagonal stripe made of O symbols. Each square has height n and width 
	n and the squares form a horizontal sequence.

	For example, if the user specified 4 for n, the program would print as follows:

	***O ***O ***O ***O
	**O* **O* **O* **O*
	*O** *O** *O** *O**
	O*** O*** O*** O***
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - ");
	scanf("%d", &n);

	printf("\n\n");

	for (int r = 1; r <= n; r++) {
		for (int c = 1; c <= n * n; c++) {
			if ((c + r - 1) % n == 0) {
				printf("0");
			} else {
				printf("*");
			}

			if(c % n == 0) {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}