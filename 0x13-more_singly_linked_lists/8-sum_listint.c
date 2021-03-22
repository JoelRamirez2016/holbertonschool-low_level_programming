#include "lists.h"

/**
 * sum_listint - get the sum of all the data (n) of a listint_t
 * @head: head to the list
 * Return: sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

