#include "main.h"

/**
 * swap_int - swaping ints
 * @a: first param, a pointer
 * @b: second param, a pointer
 *
 * Description: This function is used to
 * swap int.
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
