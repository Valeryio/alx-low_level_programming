#include "main.h"

/**
 * _sqrt_recursion - print root of a number
 * @n: (int), the number
 *
 * Description: This function return the natural
 * root of a number.
 * Return: An integer
 */

int _sqrt_recursion(int n)
{
	int c;

	if (n == 0)
	{
		return (0);
	}

	c = n * n;

	if (n == _sqrt_recursion(n-1))
	{
		return (c);
	}

	return (-1);
}
