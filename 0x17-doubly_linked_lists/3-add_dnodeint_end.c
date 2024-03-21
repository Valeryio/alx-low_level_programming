#include "lists.h"

/**
 * add_dnodeint_end - add a node to a doubled linked list
 * at the end
 * @head: the head of the list
 * @n: the data in the node
 *
 * Description: This function adds a node to the end of a
 * doubled linked node
 * Return: A node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL, *tmp_node = NULL;

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

	tmp_node = (*head);
	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}

	newnode->next = NULL;
	newnode->prev = tmp_node;
	tmp_node->next = newnode;

	return (newnode);
}
