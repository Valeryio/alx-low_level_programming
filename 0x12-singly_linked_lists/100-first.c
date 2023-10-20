#include <stdio.h>

/**
 * premain - check the code
 *
 * Description: A function that execute
 * before the main function.
 * Return: Always 0.
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
