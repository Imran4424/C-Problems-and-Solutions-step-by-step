/**
	In mathematics we learn about matrix,
		a matrix is a table of data, which can be accessed in row and column manner

	detail link - https://en.wikipedia.org/wiki/Matrix_(mathematics)

	In the code series we will learn how to construct pyramid which is actually matrix.

	Here, we will learn about different type of pyramid(matrix)

	And try to construct them with c programming
*/

/**
	*****
	*****
	*****
	*****
	*****

	this is a matrix which has 5 row and 5 column
	every cell of this matrix contains * symbol as data

	construct it with c programming
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int row = 1; row <= 5; row++) {
		for (int col = 1; col <= 5; col++) {
			printf("*");
		}

		printf("\n");
	}


	return 0;
}
