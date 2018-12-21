#include <stdio.h>


int main(int argc, char const *argv[])
{
	int row, col;

	printf("Input the 2D array size in row and column manner\n");

	printf("row: ");
	scanf("%d", &row);

	printf("col: ");
	scanf("%d", &row);

	int ar[row][col];

	printf("Now give the 2D array input\n");


	for(int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("ar[i][j]: \n");
			scanf("%d", &ar[i][j]);
			printf("\n");
		}
	}

	return 0;
}