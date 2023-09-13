#include "main.h"

/**
 * print_to_98 - prints number
 * @n: an integer to check
 *
 * Description: This function prints all numbers
 * from n to 98.
 *
 * Return: Nothing at all!
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n++);
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	}

	printf("98\n");
}
