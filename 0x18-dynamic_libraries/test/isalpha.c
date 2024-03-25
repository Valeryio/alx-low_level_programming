#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks for alphabets
 * @c: The character to be judged
 *
 * Description: Uses if statment and logical operators
 * Return: 0 (otherwise) and 1 (lowercase) to execute
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

