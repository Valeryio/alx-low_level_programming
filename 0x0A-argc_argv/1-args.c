#include <stdio.h>

/**
 * main - prints the lenght of args
 * @argc: (int), length of the table
 * @argv: (string), table of parameters given
 *
 * Description: This program print the number of
 * arguments passed into it.
 * Return: 0
 */

int main(char *argv[])
{
	int i, length = 0;

	for (i = 1; argv[i] != NULL; i++)
	{
		length++;
	}
	printf("%d\n", length);

	return (0);
}
