#include "variadic_functions.h"

/**
 * print_strings - print a string
 * @separator: (string), a separator
 * @n: (int), number of strings
 *
 * Description: This functin prints strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list arg;
	char *tmpString = NULL;

	va_start(arg, n);

	for (i = 0; i < (int) n; i++)
	{
		tmpString = va_arg(arg, char *);

		if (tmpString)
		{
			printf("%s", tmpString);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i != (((int) n) - 1))
			printf("%s", separator);

		tmpString = NULL;
	}

	va_end(arg);
	printf("\n");
}
