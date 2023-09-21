#include "main.h"


/**
 * reverse_array - reverse an array
 * @a: (int) the array
 * @n: (int) length of the array
 *
 * Description: That is a function that reverse an array.
 * Return: Nothing!
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0, length = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[length];
		a[length] = tmp;

		length--;
	}

}
