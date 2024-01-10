#include "main.h"

/**
 * factorial - get the factorial
 * @n: (int)
 *
 * Description: This function calculate
 * the factorial of a number
 * Return: An integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n-1));
}
