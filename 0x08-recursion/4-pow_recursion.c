#include "main.h"

/**
 * _pow_recursion - calculate the pow
 * @x: (int)
 * @y: (int)
 *
 * Description: This function calculate
 * the pow of a number.
 * Return: an integer
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
