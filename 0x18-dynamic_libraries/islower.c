#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks for lower case characters
 * @c: the character to be judged
 *
 * Description: Uses if statment and logical operators
 * Return: 0 (otherwise) and 1 (lowercase) to execute
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

