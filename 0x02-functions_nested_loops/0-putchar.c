#include <stdio.h>
#include <unistd.h>

/**
 * main - print a word
 *
 * Description: print a word, or
 * all a string from the standard
 * output.
 *
 * Return: On sucess 0
 */

int main(void)
{

	char *n = "_putchar";

	char c = '\n';

	write(1, n, sizeof(n));

	write(1, &c, sizeof(c));

	return (0);
}
