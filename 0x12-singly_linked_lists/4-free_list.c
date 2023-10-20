#include "lists.h"

/**
 * free_list - free a list
 * @head: (object)
 *
 * Description: This function frees a
 * list of object list_t
 */

void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
