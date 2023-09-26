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
	int i = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (!(i % (size + 1)))
		{
			sum1 += a[i];
		}

		if (i != 0 && i != ((size * size) - 1) && !(i % (size - 1)))
		{
			sum2 += a[i];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
