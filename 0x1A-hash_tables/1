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
    hash_node_t *tmpnode = NULL;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "yes I");

    for (;i < 280; i++)
    {
	    if (ht->array[i] != NULL)
	    {

		    if (ht->array[i]->next != NULL)
		    {
			    tmpnode = ht->array[i];
			    while (tmpnode)
			    {
				printf("| %s : %s  |\n", tmpnode->key, tmpnode->value);
				tmpnode = tmpnode->next;
			    }
			continue;
		    }
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
