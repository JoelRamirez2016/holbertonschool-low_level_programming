#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: reference to the head of the list
 * Return: The head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int n;

	if (!head)
		return (0);

	n = (*head)->n;
	free(*head);
	*head = (*head)->next;

	return (n);
}

