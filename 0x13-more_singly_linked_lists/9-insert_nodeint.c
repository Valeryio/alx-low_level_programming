#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node
 * @head: (object), the list
 * @idx: the index
 * @n: the element
 *
 * Description: This function inserts a new node
 * at a given position
 * Return: A pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i;
	listint_t *p = NULL, *tmp = NULL;

	if (!(*head))
		return (NULL);

	tmp = *head;

	p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);

	p->n = n;

	for (i = 0; i < (int) (idx - 1) && tmp; i++)
	{
		tmp = tmp->next;
	}

	p->next = tmp->next;
	tmp->next = p;

	return (p);
}
