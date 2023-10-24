#include "lists.h"

/**
 * free_listint - free a list
 * @head: (object), the list to free
 *
 * Description: This function allow us to
 * free a listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	if (!head)
		return;

	while  (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
