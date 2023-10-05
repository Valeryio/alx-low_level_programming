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

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
