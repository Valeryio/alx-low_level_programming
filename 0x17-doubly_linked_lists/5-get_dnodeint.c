#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at an index
 * @head: the doubled linked list
 * @index: the index
 *
 * Description: This function gets a node at an adress
 * Return: A node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp_list = NULL, *searched_node = NULL;
	int i = 0;

	tmp_list = head;
	while (tmp_list)
	{
		if (i == (int) index)
		{
			searched_node = tmp_list;
			break;
		}
		tmp_list = tmp_list->next;
		i++;
	}

	if (searched_node)
	{
		return (searched_node);
	}
	else
	{
		return (NULL);
	}
}
