/*Assignment 5:
To perform operations on two matrices.*/

#include<stdio.h>
int main()
{
	int matrixA[3][3], matrixB[3][3],add[3][3], sub[3][3], i, j, n;
	int min = 0, max = 0;
	printf("Enter the order of the matrix:= ");
	scanf_s("%d", &n);
	
	//Accepting elemets of Matrix A from user:
	printf("\nEnter the elements of matrix A:= ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &matrixA[i][j]);
		}
	}

	//Printing elements of Matrix A:
	printf("\nElements of Matrix A:= [ ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", matrixA[i][j]);
		}
	}printf("]");
	printf("\n");

	//Transpose of Matrix A:
	printf("\n1.Transpose of Matrix A:= [ ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", matrixA[j][i]);
		}
	}printf("]");
	printf("\n");

	//Minimum element in the matrix:
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			min = matrixA[0][0];
			if (min > matrixA[i][j])
			{
				min = matrixA[i][j];
			}
		}
	}
	printf("\n2.Minimum element in matrix A:= %d", min);
	printf("\n");

	//Maximum element in the matrix:
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			max = matrixA[0][0];
			if (max < matrixA[i][j])
			{
				max = matrixA[i][j];
			}
		}
	}
	printf("\n3.Maximum element in matrix A:= %d", max);
	printf("\n");
	
	//Accepting elemets of Matrix B from user:
	printf("\nEnter the elements of matrix B:= ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &matrixB[i][j]);
		}
	}
	//Printing elements of Matrix A:
	printf("\nElements of Matrix B:= [ ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", matrixB[i][j]);
		}
	}printf("]");
	printf("\n");

	//Addition of two matrices:
	printf("\n4.Addition of MatrixA and MatrixB:= [ ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			add[i][j] = matrixA[i][j] + matrixB[i][j];
			printf("%d ", add[i][j]);
		}
	}printf("]");

	printf("\n");

	//Subtraction of two matrices:
	printf("\n5.Subtraction of MatrixA and MatrixB:= [ ");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			sub[i][j] = matrixB[i][j] - matrixA[i][j];
			printf("%d ", sub[i][j]);
		}
	}printf("]");
	printf("\n");
	return 0;
}


/*OUTPUT:
Enter the order of the matrix:= 2

Enter the elements of matrix A:= 1 2 3 4

Elements of Matrix A:= [ 1 2 3 4 ]

1.Transpose of Matrix A:= [ 1 3 2 4 ]

2.Minimum element in matrix A:= 1

3.Maximum element in matrix A:= 4

Enter the elements of matrix B:= 5 6 7 8

Elements of Matrix B:= [ 5 6 7 8 ]

4.Addition of MatrixA and MatrixB:= [ 6 8 10 12 ]

5.Subtraction of MatrixA and MatrixB:= [ 4 4 4 4 ]*/
