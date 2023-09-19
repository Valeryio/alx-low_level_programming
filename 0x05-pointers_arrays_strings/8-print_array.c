#include "main.h"

/**
 * print_array - print array
 * @a: (array) param
 * @n: (int) index
 *
 * Description: This function prints a number of element
 * from an array.
 * Return: Nothing
 */


void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if ((i+1) != n)
		{
			printf(", ");
		}
	}

	printf("\n");
}
