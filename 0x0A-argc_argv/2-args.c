#include <stdio.h>

/**
 * main - print all its parameters
 *
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This function prints
 * all its parameters.
 * Return: 0 in all cases
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
