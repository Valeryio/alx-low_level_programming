#include "lists.h"

/**
 * add_node_end - add a node to the list
 * @head: (pointer to object)
 * @str: (char *)
 *
 * Description: This function adds a new
 * node at the beginning of a list_t list.
 * Return: a pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t)), *tmp = NULL;

	tmp = *head;

	if (!new || !str)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
