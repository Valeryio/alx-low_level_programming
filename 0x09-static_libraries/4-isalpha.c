#include "main.h"

/**
 * _isalpha - check if a character is upper or lower
 * @c: the character checked
 *
 * Description: This function determine if a character
 * is upper or lower.
 *
 * Return: On sucess 1
 * On error 0
 */

int _isalpha(int c)
{
	if (((c >= 'A') && (c < 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
