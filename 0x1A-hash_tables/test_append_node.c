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
    hash_node_t *current = NULL;
    hash_node_t *second_node = NULL;
    hash_node_t *third_node = NULL;
    int i = 0;

    new_node = createNode("nom", "DOUMATE");
    second_node = createNode("Couleur", "Noir");
    third_node = createNode("taile", "1m80");

    appendNode(&second_node, &new_node);
    appendNode(&third_node, &new_node);

    current = new_node;

    for (; i < 3; i++)
    {
      printf("Nous avons la cle : %s\n", current->key);
      printf("Nous avons la valeur : %s\n", current->value);
      current = current->next;
    }

    return (0);
}
