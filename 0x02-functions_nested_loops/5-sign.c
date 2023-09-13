#include "main.h"

/**
 * print_sign  - print the sign of a number
 * @c: the character checked
 *
 * Description: This function check the sign 
 * of a number
 *
 * Return: On positive sucess 1
 * On negative sucess -1
 * else 0
 */

int print_sign(int c)
{
	if (((-1) * c) < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (((-1) * c) > 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
