#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: (object), the list
 *
 * Description: This function deletes the head node of
 * a listint_t linked list, and returns the head node's
 * data (n)
 * Return: An integer
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!(*head))
		return (0);

	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
