#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht = NULL;
    int i = 0;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");

    for (;i < 180; i++)
    {
	    if (ht->array[i] != NULL)
	    {

		    printf("I[%d]", i);
		    printf("Arg 1: %s\n", ht->array[i]->key);
		    printf("Arg 2: %s\n\n", ht->array[i]->value);
	    }
	    else
	    {
		    printf(" I[%d] : NULL\n", i);
	    }
    }

    return (EXIT_SUCCESS);
}
