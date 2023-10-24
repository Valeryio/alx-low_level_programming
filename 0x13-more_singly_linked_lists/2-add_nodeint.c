#include "lists.h"

/**
 * add_nodeint - add a node
 * @head: (object) the list
 * @n: (int), the value
 *
 * Description: This function add a new node
 * at the beginning of a listint_t list
 * Return: An adress
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);

	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
