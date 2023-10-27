#include "main.h"

/**
 * print_binary - print the binary representation
 * @n: (unsigned long int), the number to convert
 *
 * Description: This function makes the binary
 * conversion of a given param n.
 */


void print_binary(unsigned long int n)
{
	int tmp = 0, mask, length = 0;


	if (n == 0)
	{
		_putchar('0');
		return;
	}


	tmp = (int) n;

	while (tmp)
	{
		length++;
		tmp >>= 1;
	}

	tmp = n;
	length--;

	printf("La taille de ce qu'il faut : %d\n", length);

	if (length)
		mask = 1 << length;

	while (tmp > 0)
	{
		if (tmp & mask)
			_putchar('1');

		if (!(tmp & mask))
			_putchar('0');

		tmp <<= 1;
	}
}
