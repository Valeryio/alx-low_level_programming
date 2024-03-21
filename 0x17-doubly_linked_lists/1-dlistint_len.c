#include "lists.h"

/**
 * dlistint_len - determine length of a doubly linked list
 * @h: the linked list
 *
 * Description: This function determines the length of the
 * doubly linked list
 * Return: An integer
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_length = 0;
	dlistint_t *node_tmp = (void *) h;

	while (node_tmp != NULL)
	{
		node_length++;
		node_tmp = node_tmp->next;
	}
	return (node_length);
}
