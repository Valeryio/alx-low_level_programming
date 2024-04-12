#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_node_t *new_node = NULL;

    new_node = createNode("nom", "DOUMATE");

    printf("Nous avons la cle : %s\n", new_node->key);
    printf("Nous avons la valeur : %s\n", new_node->value);
    return (0);
}
