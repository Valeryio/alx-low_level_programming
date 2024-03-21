#include "lists.h"

/**
 * add_dnodeint - add a node to the list
 * @head: the node head
 * @n: the element data
 *
 * Description: This function adds a node
 * to a doubly linked list
 * Return: A pointer to the list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = (int) n;
	newnode->prev = NULL;

	if ((*head) == NULL)
	{
		(*head) = newnode;
		return (newnode);
	}

	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
