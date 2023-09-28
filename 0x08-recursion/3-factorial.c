#include "main.h"

/**
 * factorial - compute the factorial
 * @n: (int), the number of which we want to
 * find the factorial
 *
 * Description: This functin returns the factorial
 * of a given number.
 * Return: An integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
