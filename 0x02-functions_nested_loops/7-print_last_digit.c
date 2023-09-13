#include "main.h"

/**
 * print_last_digit - print the last digit
 * @number: the number to check
 *
 * Description: That is a function that prints
 * the last digit of a number
 *
 * Return: a numberr @a
 */

int print_last_digit(int number)
{
	if (number < 0)
	{
		number *= -1;
	}

	do
	{
		number = number % 10;
	} while ((number % 10) > 10);

	_putchar(number);

	return number;
}
