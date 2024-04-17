#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash_tables
 *
 * @ht: (hash_table_t) the hashtable to delete
 * Description: This function frees the memory used by an
 * hashtable
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	int i = 0;
	hash_node_t *tmpnode = NULL, *current = NULL;

	if (ht == NULL)
		free(ht);

	for (; i < (int) ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;

	/*Free node list with collisions*/
		if (ht->array[i]->next != NULL)
		{
			current = ht->array[i];

			while (current)
			{
				tmpnode = current;
				free(current->key);
				free(current->value);
				current = current->next;
				free(tmpnode);
			}

			continue;
		}

		free(ht->array[i]->key);
		free(ht->array[i]->value);
		free(ht->array[i]);
	}

	free(ht->array);
	free(ht);
}
