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
	dlistint_t *tmp_node = NULL;

	tmp_node = head;

	while(!tmp_node->next)
	{
		tmp_node = tmp_node->next;
		free(tmp_node->prev);
	}
}
