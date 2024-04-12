#include "hash_tables.h"

/**
 * hash_djb2 - implement a hash function
 *
 * @str: the string to use
 * Description: This function implements is the hash function that returns
 * an integer for the index of the hash_node_t
 * Return: An integer#
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
