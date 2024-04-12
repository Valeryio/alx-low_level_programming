#include "hash_tables.h"

/**
 * appendNode - append a node
 *
 * @node: (hash_node_t), the node to append
 * @list: (hash_node_t), the end of the linked list
 * Description: This function appends a node another to create linked list
 * Return: An integer
 */

int appendNode(hash_node_t **node, hash_node_t **list)
{
	hash_node_t *tmpnode = NULL;

	tmpnode = (*list);

/*Browse the list to get the end*/
	while (tmpnode->next != NULL)
		tmpnode = tmpnode->next;

/*Append to the lastt element of the list*/
	tmpnode->next = (*node);
	return (1);
}
