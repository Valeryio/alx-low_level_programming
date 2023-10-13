#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: (char), the separator char
 * @n: (int), the number of arguments
 *
 * Description: This function prints numbers
 * followed by a new line
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < (int) n; i++)
	{
		printf("%d", va_arg(arguments, int));

		if (separator != NULL)
			printf("%s", separator);
		else
			printf(" ");
	}

	printf("\n");

	va_end(arguments);
}
