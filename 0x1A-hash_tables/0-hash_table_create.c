#include "hash_tables.h"

/**
 * hash_table_create - creates an hash table
 *
 * @size: (unsigned long int), the size of the hash table
 * Description: This function creates an hash tables and
 * send it.
 * Return: A pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

/*Creating the a pointer to the dynamic hash table*/
	table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);

/*Setting the table size*/
	table->size = size;
/*Initialising the hash nodes array, dynamically*/
	table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}

	return (table);
}
