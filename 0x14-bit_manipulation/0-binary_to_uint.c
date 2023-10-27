#include "main.h"

/**
 * trOf - identify a zero or a 1
 * @c: (char)
 *
 * Description: This function identify if
 * a char is 0 or 1
 * Return: An integer
 */

int trOf(char c)
{
	if (c == '0')
		return (0);

	return (1);
}



/**
 * expo - give the exp of base
 * @base: (int) the base to multiply
 * @exp: (int) the  number of the exp
 *
 * Description: This function give the
 * exp of base.
 * Return: An integer
 */

int expo(int base, int exp)
{
	int i = 0, result = 1;

	for (i = 0; i < exp; i++)
		result *= base;

	return (result);
}


/**
 * binary_to_uint - convert a number
 * @b: (char *), the binary number
 *
 * Description: This function converts a binary number
 * to an unsigned int.
 * Return: An integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, k, result = 0;

	/**
	 * verification of the b arg
	 */

	if (!b)
		return (0);


	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
	}

	i--;

	for (k = 0; i >= 0; i--)
	{
		result += (trOf(b[i]) * expo(2, k));
		k++;
	}

	return ((unsigned int) result);
}
