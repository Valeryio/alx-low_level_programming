#include "lists.h"

/**
 * list_len - This function get the length of
 * a list
 * @h: (object)
 *
 * Description: This function determine
 * the length of a list_t.
 * Return: An size_t element
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
