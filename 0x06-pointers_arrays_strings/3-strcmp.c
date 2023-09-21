#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: (string), the first string
 * @s2: (string), the second string
 *
 * Description: This function compares arithmethically two
 * strings.
 * Return: An integer
 */

int _strcmp(char *s1, char *s2)
{
	int firstLetter_1 = 0, firstLetter_2 = 0;

	firstLetter_1 = (int) s1[0];
	firstLetter_2 = (int) s2[0];

	return (firstLetter_2 - firstLetter_1);
}
