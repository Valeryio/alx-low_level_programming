#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 * @head: (object),
 * @index: (int), the index
 *
 * Description: This function deletes the node at
 * an index of the list
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL, *trash = NULL;
	int i;

	if (!(*head))
		return (-1);

	tmp = *head;

	for (i = 0; i < (int) (index - 1); i++)
	{
		tmp = tmp->next;
	}

	trash = tmp->next;
	tmp->next = trash->next;
	free(trash);

	return (1);
}
