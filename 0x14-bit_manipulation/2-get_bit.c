#include "main.h"

/**
 * get_bit - get the bit
 * @n: (int), the number
 * @index: (int), the index
 *
 * Description: This function gets
 * the value of a bit at a given index
 * Return: An integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int a = 0, b = 0, c = 0;

	if (!(n >> index))
		return (-1);

	c = n << index;

	printf("Voici c : %d\n", c);

	a = (int) n;
	b = 1 << (int) index;

	if (a & b)
	{
		return (1);
	}

	return (0);
}
