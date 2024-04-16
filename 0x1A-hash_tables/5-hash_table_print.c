#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: (hash_table_t) the hash_table to use
 * Description: This function prints an hashtable
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int i = 0, non_empty = 0;

	if ((ht->size == 0) || ht->array == NULL)
	{
		printf("{}\n");
		return;
	}

	printf("{");
	for (; i < (int) ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			non_empty++;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}

		if (non_empty != 0 && (ht->array[i + 1] != NULL))
			printf(",");
	}
	printf("}");
}
