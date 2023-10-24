#include "lists.h"


/**
 * listint_len - print a list
 * @h: the list
 *
 * Description: This function prints all
 * the elements of a listint_t list.
 * Return: An size_t value
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
