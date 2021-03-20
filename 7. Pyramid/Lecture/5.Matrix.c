/**
	*
	**
	***
	****
	*****

	this is a matrix which has 5 row and colums similar to row number
	every cell of this matrix contains * symbol as data


	construct it with c programming
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int row = 1; row <= 5; row++) {
		for (int col = 1; col <= row; col++) {
			printf("*");
		}

		printf("\n");
	}


	return 0;
}
