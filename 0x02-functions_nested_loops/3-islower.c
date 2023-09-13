#include "main.h"

/**
 * _islower - check if a character is lower or not
 * @c: the character checked
 *
 * Description: This function determine if a character
 * is lower or not.
 *
 * Return: On sucess 1
 * On error 0
 */

int _islower(int c)
{
	if ((c >= 'a') && (c < 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
