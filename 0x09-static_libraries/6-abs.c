#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _abs - Returns the absolute value of i
 * @i: the integer to be judged
 *
 * Description: Uses if statement and logical operators
 * Return: Absolute i
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else
		return (i * (-1));
}

