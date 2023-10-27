#include "main.h"

/**
 * divInt - make the division
 * @a: (int), te dividend
 * @b: (int), the divisor
 *
 * Description: This function makes
 * an Euler's division
 * Return: An integer
 */

int divInt(int a, int b)
{
	int i;

	for (i = 0; a >= b; i++)
		a = a - b;

	return (i);
}


/**
 * mod - make the modulo
 * @a: (int), the dividend
 * @b: (int), the divisor
 *
 * Description: This function makes
 * a modulo operation.
 * Return: An integer
 */

int mod(int a, int b)
{
	int i;

	for (i = 0; a >= b; i++)
		a = a - b;

	return (a);
}


/**
 * print_binary - print the binary representation
 * @n: (unsigned long int), the number to convert
 *
 * Description: This function makes the binary
 * conversion of a given param n.
 */


void print_binary(unsigned long int n)
{
	char str[64];
	int i = 0;

	while (divInt(n, 2) > 0)
	{
		str[i] = (mod(n, 2) == 1) ? '1' : '0';
		n = divInt(n, 2);
		i++;
	}

	str[i] = (mod(n, 2) == 1) ? '1' : '0';

	str[i + 1] = '\0';

	for (; i >= 0; i--)
	{
		_putchar(str[i]);
	}

}
