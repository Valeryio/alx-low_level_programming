#include "hash_tables.c"

/**
 * key_index - find a right index
 *
 * @key: (string), the key to use
 * @size: (unsigned long int), the size of the array
 *
 * Description: This function return the index in the
 * range of the length of the hashtable
 * Return: An integer
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = 0;

	result = hash_djb2(key) % size;
	return (result);
}
