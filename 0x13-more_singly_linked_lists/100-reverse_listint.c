#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: reference to the head list to reverse
 * Return: list head reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n_curr = *head, *n_prev = 0;

	while (*head)
	{
		*head = (*head)->next;
		n_curr->next = n_prev;
		n_prev = n_curr;
		n_curr = *head;
	}
	*head = n_prev;

	return (*head);
}
