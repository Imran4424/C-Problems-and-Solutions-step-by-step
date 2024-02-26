#include <stdio.h>


int main(int argc, char const *argv[])
{
	int row, col;

	printf("Input the 2D array size in row and column manner\n");

	printf("row: ");
	scanf("%d", &row);

	printf("col: ");
	scanf("%d", &col);

	int ar[row][col];

	printf("Now give the 2D array input\n");


	for(int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("ar[%d][%d]: ", i, j);
			scanf("%d", &ar[i][j]);
			printf("\n");
		}
	}


	for(int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}

	return 0;
}