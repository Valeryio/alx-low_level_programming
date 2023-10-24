#include "lists.h"

/**
 * get_nodeint_at_index - get a node index
 * @head: (object), the node
 * @index: (int), an index
 *
 * Description: This function returns thn node of
 * the listint_t linked list.
 * Return: A pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	if (!head)
		return (NULL);

	for (i = 0; i < (int) index; i++)
	{
		head = head->next;
	}

	return (head);
}
