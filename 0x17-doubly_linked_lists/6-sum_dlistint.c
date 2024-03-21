#include "lists.h"

/**
 * sum_dlistint - make the some of a list
 * @head: the list
 *
 * Description: This fonction make the sum of
 * different elements of a list
 * Return: An integer
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node = NULL;
	int sum = 0;

	if (!head)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}

	return (sum);
}
