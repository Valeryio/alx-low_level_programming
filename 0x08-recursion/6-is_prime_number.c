#include "main.h"

/**
 * is_prime_number - verify is a number is prime
 * @n: (int), the number to verify
 *
 * Description: This function returns 1 if the input
 * integer is a prime number, and 0 otherwise
 * Return: An int
 */

int is_prime_number(int n)
{

	if (n == 2)
	{
		return (2);
	}

	if (!(n % is_prime_number(n-1)))
	{
		return (0);
	}

	return (1);
}
