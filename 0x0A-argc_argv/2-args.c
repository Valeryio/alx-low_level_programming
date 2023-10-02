#include <stdio.h>

/**
 * main - prints the lenght of args
 * @argc: (int), length of the table
 * @argv: (string), table of parameters given
 *
 * Description: This program print the arguments of
 * arguments passed into it.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
