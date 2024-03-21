#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at this index
 * @h: the list
 * @idx: the index
 * @n: the node to insert
 *
 * Description: This function insert a new node to the index
 * idx, in the list h
 * Return: NULL on failure, and a pointer otherwise
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp_node = NULL, *newnode = NULL;
	int i = 0;

	if (!h)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	tmp_node = (*h);
	while (tmp_node)
	{
		if ((i + 1) == (int) idx)
		{
			newnode->prev = tmp_node;
			newnode->next = tmp_node->next;
			tmp_node->next = newnode;
			break;
		}

		i++;
		tmp_node = tmp_node->next;
	}

	return (newnode);
}
