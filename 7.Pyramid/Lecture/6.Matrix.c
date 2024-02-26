/**
	*
	**
	***
	****
	*****

	this is a matrix which has 5 row and colums similar to row number
	every cell of this matrix contains * symbol as data

	Construct this pyramid n rows and and significant columns with c programming
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n - s");
	scanf("%d", &n);

	printf("\n\n");

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= row; col++) {
			printf("*");
		}

		printf("\n");
	}


	return 0;
}
