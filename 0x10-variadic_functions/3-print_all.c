#include "variadic_functions.h"

/**
 * print_all - print all
 * @format: (char *), the format string
 *
 * Description: This function prints anything!
 */

void print_all(const char * const format, ...)
{
	int i = 0, tmpInt = 0;
	/*char *tmpString = NULL;*/
	va_list arg;

	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == 'i')
		{
			tmpInt = va_arg(arg, int);
			printf("%d", tmpInt);
		}
		i++;
		/*else if (format[i] == 'c' || format[i] == 's')
		{
			tmpString = va_arg(arg, char *);
			printf("%s", tmpString);
			i++;
		}*/
	}

	va_end(arg);
	printf("\n");
}
