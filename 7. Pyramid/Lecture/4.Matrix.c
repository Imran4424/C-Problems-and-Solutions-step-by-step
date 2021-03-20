
/**
	12345
	12345
	12345
	12345
	12345
	
	this is a matrix which has 5 row and 5 column
	every cell of this matrix contains 1  as data

	construct it with c programming
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (int row = 1; row <= 5; row++) {
		for (int col = 1; col <= 5; col++) {
			printf("%d", col);
		}

		printf("\n");
	}


	return 0;
}
