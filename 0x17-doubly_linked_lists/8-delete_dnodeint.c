#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at this index
 * @head: the list
 * @index: the index
 *
 * Description: This function delete a new node to the index
 * index, in the list h
 * Return: NULL on failure, and a pointer otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_node = NULL, *newnode = NULL;
	int i = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		newnode = (*head);
		*head = (*head)->next;
		free(newnode);

		return (1);
	}

	tmp_node = (*head);
	while (tmp_node)
	{
		if ((i + 1) == (int) index)
		{
			newnode = tmp_node->next;
			tmp_node->next = tmp_node->next->next;
			free(newnode);
			break;
		}

		i++;
		tmp_node = tmp_node->next;
	}

	return (1);
}
