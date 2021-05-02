#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data (n) of a dlistint_t linked list
 * @head: head of the list
 * Return: sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
