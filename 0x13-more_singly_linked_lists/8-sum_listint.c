#include "lists.h"

/**
 * sum_listint - sum a list data
 * @head: (object), the list
 *
 * Descriptino: This funcitno retunrs the sum of all
 * the data(n), of a listint_t linked list.
 * Return: an integer
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
