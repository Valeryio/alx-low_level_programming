#include "variadic_functions.h"

/**
 * sum_them_all - sum parameters of functions
 * @n: The number of characters
 *
 * Description: This function returns the sum of all
 * its parameters.
 * Return: An integer
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
		return (0);

	for (i = 0; i < (int) n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);

	return (sum);
}
