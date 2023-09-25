#include "main.h"

/**
 * print_diagsums - print the sum of two
 * diagonals.
 * @a: (int array), the matrix we want to use
 * @size: (int), the size of the matrix
 *
 * Description: This function prints sum of a
 * square matrix of integers.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0, realSize = size - 1;

	int **b = &a;

	for (i = 0; i < size; i++)
	{
		sum1 += b[i][i];
		sum2 += b[realSize-1][realSize-1];
	}


	printf("%d, %d\n", sum1, sum2);
}
