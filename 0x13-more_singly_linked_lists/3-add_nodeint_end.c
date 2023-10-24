#include "lists.h"

/**
 * add_nodeint_end - add a node
 * @head: (object) the list
 * @n: (int), the value
 *
 * Description: This function add a new node
 * at the beginning of a listint_t list
 * Return: An adress
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *tmp = *head;

	p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (!(*head))
	{
		*head = p;
		return (p);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = p;

	return (p);
}
