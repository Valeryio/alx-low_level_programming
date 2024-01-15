#include <stdio.h>

/**
 * main - print its number of parameters
 *
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This function prints
 * its bumbe of parameters.
 * Return: 0 in all cases
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
