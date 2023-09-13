#include <unistd.h>

/**
 * _putchar - write a character to the stdout
 * @c: the character to write
 *
 * Description: This function use the syscalls
 * write() to write to the stdout.
 *
 * Return: On success 1
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
