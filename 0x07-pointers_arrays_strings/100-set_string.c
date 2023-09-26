#include "main.h"

/**
 * set_string - manipulate the value of two pointers
 * @s: (string), a double pointer
 * @to: (string), a simple pointer
 *
 * Description: This functino sets the value of a
 * pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
