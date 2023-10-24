#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: (object)
 *
 * Description: This funciton frees a listint_t
 * list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (!(*head))
	{
		*head = NULL;
		exit(0);
	}


	while ((*head))
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	head = NULL;

}
