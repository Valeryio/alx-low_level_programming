#include "main.h"


int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - verify if a number is a prime
 * @n: (int)
 *
 * Description: This function verify if a number is
 * a prime or not
 * Return: 1 on success, 0 otherwise!
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);

	if (is_prime_helper(n, n-1))
		return (0);
	
	return (1);
}

/**
 * is_prime_helper - divise numbers
 * @n: (int)
 * @divisor: (int)
 *
 * Description: This function divise
 * a number by its potential divisors
 * Return: A number;
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor == 0)
		return (1);

	if ((n % divisor) == 0)
		return (0);

	return (is_prime_helper(n, divisor - 1));
}
