#include "main.h"

/**
 * _pow_recursion - compute the pow
 * @x: (int), the base
 * @y: (int), the power
 *
 * Description: This function returns the value
 * of x raised to the power of y.
 * Return: An integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
