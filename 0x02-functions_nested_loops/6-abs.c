#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 * @a : the integer to check
 *
 * Description: This function compute the absolute
 * value of a given integer.
 *
 * Return: On success -@a
 */

 int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a > 0)
	{
		return (a);
	}
	else
	{
		return (0);
	}
}
