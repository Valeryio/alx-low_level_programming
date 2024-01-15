#include <stdio.h>

/**
 * main - print its name
 *
 * @argc: (int)
 * @argv: (object)
 *
 * Description: This function prints
 * its own name
 * Return: Nothing!
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
