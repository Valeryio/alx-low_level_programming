#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the list
 *
 * Description: This function frees a doubly linked
 * list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node = NULL, *to_delete = NULL;

	tmp_node = head;
	while (tmp_node)
	{
		to_delete = tmp_node;
		tmp_node = tmp_node->next;
		free(to_delete);
	}
}
