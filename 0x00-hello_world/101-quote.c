#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - display a text
 *
 * Description: A function used to display a text
 * Return: 0;
 */

int main(void)
{

	char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, message, strlen(message));

	return (0);
}
