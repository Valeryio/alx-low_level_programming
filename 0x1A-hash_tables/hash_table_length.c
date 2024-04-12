#include "hash_tables.h"

/**
 * getHashTableLenght - length of an hashtable
 * 
 * @ht - (hash_node) the hash_table
 * Description: This function gets the length of an hash table
 * Return: An integer
 */

unsigned int getHashTableLength(hash_node_t **ht)
{
	unsigned int length = 0;

	while (ht[length] != NULL)
		length++;

	return (length);
}
