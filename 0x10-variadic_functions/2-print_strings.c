#include "variadic_functions.h"

/**
 * print_string - print a string
 * @separator: (string), a separator
 * @n: (int), number of strings
 *
 * Description: This functin prints strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list arg;
	va_start(arg, n);

	for (i = 0; i < (int) n; i++)
	{
		printf("%s", va_arg(arg, char *));

		if (separator != NULL && i != (((int) n) - 1))
			printf("%s", separator);
	}

	va_end(arg);
	printf("\n");
}
