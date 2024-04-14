#include "hash_tables.h"

/**
 * hash_table_get - geet a value
 *
 * @ht: (hash_table), the hash_table to use
 * @key: (string), the key to check
 * Description: This function retrieves the value associated with a key
 * in a has_table. If the hash_table is chained, then, it gets the last
 * value
 * Return: A string on SUCCESS, and NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t **tmpnode = NULL;
	int i = 0, result = 1;

/*Checking that the hash_table is not empty*/
	if (ht == NULL)
		return (NULL);

	if (ht->array == NULL)
		return (NULL);

	tmpnode = &(*ht->array);

/*Searching through the array until, the key is found*/
	while (i < (int) ht->size)
	{
		if (!tmpnode[i])
		{
			i++;
			continue;
		}

		result = strcmp(tmpnode[i]->key, (char *)key);
		if (result == 0)
			return (tmpnode[i]->value);
		i++;
	}

/*Send NULL for the result not found*/
	return (NULL);
}
