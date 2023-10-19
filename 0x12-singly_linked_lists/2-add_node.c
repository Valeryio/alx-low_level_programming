#include "lists.h"

/**
 * add_node - add a node to the list
 * @head: (pointer to object)
 * @str: (char *)
 *
 * Description: This function adds a new
 * node at the beginning of a list_t list.
 * Return: a pointer
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
