#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

void _hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n;

	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		printf("[%lu]", i);
		n = 0;
		while (p)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p-> next;
			n = 1;
		}
		printf("\n");
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	int ret;

	ht = hash_table_create(1024);
	ret = hash_table_set(ht, "C", "is fun");
	printf("%d\n", ret);
	_hash_table_print(ht);
	return (EXIT_SUCCESS);
}
