#include "main.h"

/**
 * clear_bit - set a bit to 1
 * @n: (int), the number
 * @index: (int), the indexx
 *
 * Description: THis function sets the value
 * of a bit to 0 at a givenindex.
 * Return: 1 on succes, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int a = 0, b = 0, c = 0;

	a = *n;
	c = a;

	if (!(c >> index))
		return (-1);

	b = 1 << index;
	*n = a & ~b;

	return (1);
}
