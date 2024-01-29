#include <stdio.h>
#include <stdlib.h>

/**
 * main - print a name
 * Description: THis function prints the name
 * of the fonction of which it has been compiled
 * Return: Nothing
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
