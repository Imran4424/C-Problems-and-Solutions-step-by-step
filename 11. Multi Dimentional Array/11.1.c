#include <stdio.h>


int main(int argc, char const *argv[])
{
	int row, col;
	int i,j;

	printf("Input the 2D array size in row and column manner\n");

	printf("row: ");
	scanf("%d", &row);

	printf("col: ");
	scanf("%d", &col);

	int ar[row][col];

	printf("Now give the 2D array input\n");


	for(i = 0; i < row ; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("ar[i][j]: \n");
			scanf("%d", &ar[i][j]);
			printf("\n");
		}
	}


	for(i = 0; i < row ; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}

	return 0;
}